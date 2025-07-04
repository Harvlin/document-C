#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <stdexcept>

using namespace std;

class ExpressionEvaluator {
private:
    static bool isOperator(char c) {
        return c == '+' || c == '-' || c == '*' || c == '/';
    }
    
    static int getOperator(char op) {
        if (op == '*' || op == '/')
            return 2;
        if (op == '+' || op == '-')
            return 1;
        return 0;
    }
    
    static double applyOperation(double a, double b, char op) {
        switch (op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/':
                if (b == 0) throw runtime_error("Division by zero");
                return a / b;
            default: throw runtime_error("Invalid operator");
        }
    }

public:
    static double evaluate(const string& expression) {
        stack<double> values;
        stack<char> operators;
        
        string processedExpresion;
      
        for (char c : expression) {
            if (!isspace(c)) processedExpresion += c;
        }
        
        for (size_t i = 0; i < processedExpresion.length(); i++) {
            if (isdigit(processedExpresion[i])) {
                string numStr;
                while (i < processedExpresion.length() && 
                       (isdigit(processedExpresion[i]) || processedExpresion[i] == '.')) {
                    numStr += processedExpresion[i];
                    i++;
                }
                i--;
                values.push(stod(numStr));
            }
            else if (isOperator(processedExpresion[i])) {
                while (!operators.empty() && 
                       getOperator(operators.top()) >= getOperator(processedExpresion[i])) {
                    double val2 = values.top(); values.pop();
                    double val1 = values.top(); values.pop();
                    char op = operators.top(); operators.pop();
                    values.push(applyOperation(val1, val2, op));
                }
                operators.push(processedExpresion[i]);
            }
        }
        
        while (!operators.empty()) {
            double val2 = values.top(); values.pop();
            double val1 = values.top(); values.pop();
            char op = operators.top(); operators.pop();
            values.push(applyOperation(val1, val2, op));
        }
        
        return values.top();
    }
};

int main() {
    string expression;
    cout << "Enter an expression: ";
    getline(cin, expression);
    
    try {
        double result = ExpressionEvaluator::evaluate(expression);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}