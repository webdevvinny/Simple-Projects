#include <iostream>
#include <string.h>

using namespace std;

string sign, response;
float num1, num2, result;

int main () {

      //THIS IS A SIMPLE CALCULATOR FOR MY NEW SKILLS IN CPP

      do
      {
      
                  cout << "This is just a basic calculator!!!!!!! \n";
                  cout << "No complex operations needed for now!!! \n";
                  cout << "You have to sign up and be a pro member if you want to perform complex calculations!!!\n";
                  cout << "Choose one of the operator below to perform a simple calculator!! \n";
                  cout << "Addition (+) \nMultiplication (*)\nDivision(/)\nSubtraction (-) \n";
                  cin >> sign;
                  cout << "Enter the first Number!!!\n";
                  cin >> num1;
                  cout << "Enter the second number \n";
                  cin >> num2;

                  if (sign == "+")
                        {
                              result = num1 + num2;
                              cout << "The result of adding " << num1 << " and " << num2 << " is: " << result << endl ;
                        }
                  else if (sign == "-")
                        {
                              result = num1 - num2;
                              cout << "The result of subtracting " << num1 << " from " << num2 << " is: " << result << endl ;
                        }
                  else if (sign == "*")
                        {
                              result = num1 * num2;
                              cout << "The result of multiplying " << num1 << " and " << num2 << " is: " << result << endl ;
                        }
                  else if (sign == "/")
                        {
                              if(num2 == 0){
                                    cout << "You cannot divide " << num1 << " by " << num2 << endl;
                              }
                              else{
                                    result = num1 / num2;
                                    cout << "The result of dividing " << num1 << " and " << num2 << " is: " << result << endl ;
                              }
                        }
                  else
                        {
                              cout << "Wrong input type!!!!!!!! \n";  
                        }
            cout << "Would you like to continue!! (Y/n) \n";
            cin >> response;
      }
      while(response == "Yes" || response == "Y" || response == "yes" || response == "YES");{
            cout << "What a heck is " << response << ".Just kidding !!! \n";
            cout << "Hoped you enjoyed my calculator!!! SEE YOU THEN SHOOTER!!!!!!!";
      }
      return 0;
}
