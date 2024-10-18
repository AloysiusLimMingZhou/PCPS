#include <iostream>
using namespace std;

char response;
int selection, price, quantity;
char yn;

void loop(){
    while(true){
        if(yn == 'y'){
            cout << "-----------------------------------------" << endl;
            cout << "\t\t Welcome to Vegetable Farm X" << endl;
            cout << "Please select your prefered items: " << endl;
            cout << "A. Monthly Growner 1-Leafy" << endl;
            cout << "B. Monthly Growner 2-Leafy" << endl;
            cout << "C. Monthly Growner 3-Leafy" << endl;
            cout << "D. Monthly Growner 1-Fruity" << endl;
            cout << "E. Monthly Growner 2-Fruity" << endl;
            cout << "F. Annual Growner 1-Leafy" << endl;
            cout << "G. Annual Growner 2-Leafy" << endl;
            cin >> response;
    
            switch (toupper(response)){
                case 'A':
                    cout << "Please select the following: " << endl;
                    cout << "1. Salad Lettuce" << endl;
                    cout << "2. Hearty Asian Greens" << endl;
                    cout << "3. Salad & Asian mix" << endl;
                    cin >> selection;
                        switch (selection)
                        {
                        case 1:
                            price += 105;
                            break;

                        case 2:
                            price += 105;
                            break;

                        case 3:
                            price += 105;
                            break;

                        default:
                            cout << "Invalid selection" << endl;
                            break;
                        }
            
                    break;

                case 'B':
                    cout << "Please select the following: " << endl;
                    cout << "1. Salad Lettuce" << endl;
                    cout << "2. Hearty Asian Greens" << endl;
                    cout << "3. Salad & Asian mix" << endl;
                    cin >> selection;
                        switch (selection)
                        {
                        case 1:
                            price += 189;
                            break;
                
                        case 2:
                            price += 189;
                            break;

                        case 3:
                            price += 189;
                            break;
                
                        default:
                            cout << "Invalid selection" << endl;
                            break;
                    
                    }
                    break;
        
                case 'C':
                    cout << "Please select the following: " << endl;
                    cout << "1. Salad Lettuce" << endl;
                    cout << "2. Hearty Asian Greens" << endl;
                    cout << "3. Salad & Asian mix" << endl;
                    cin >> selection;
                        switch (selection)
                        {
                        case 1:
                            price += 270;
                            break;
                
                        case 2:
                            price += 270;
                            break;

                        case 3:
                            price += 270;
                            break;
                
                        default:
                            cout << "Invalid selection" << endl;
                            break;
                    
                    }
                    break;
        
                case 'D':
                    price += 130;
                    break;

                case 'E':
                    price += 260;
                    break;

                case 'F':
                    cout << "Please select the following: " << endl;
                    cout << "1. Salad Lettuce" << endl;
                    cout << "2. Hearty Asian Greens" << endl;
                    cout << "3. Salad & Asian mix" << endl;
                    cin >> selection;
                        switch (selection)
                        {
                        case 1:
                            price += 1200;
                            break;
                
                        case 2:
                            price += 1200;
                            break;

                        case 3:
                            price += 1200;
                            break;
                
                        default:
                            cout << "Invalid selection" << endl;
                            break;
                    }
                    break;

                case 'G':
                    cout << "Please select the following: " << endl;
                    cout << "1. Salad Lettuce" << endl;
                    cout << "2. Hearty Asian Greens" << endl;
                    cout << "3. Salad & Asian mix" << endl;
                    cin >> selection;
                        switch (selection)
                        {
                        case 1:
                            price += 2200;
                            break;
                
                        case 2:
                            price += 2200;
                            break;

                        case 3:
                            price += 2200;
                            break;
                
                        default:
                            cout << "Invalid selection";
                            break;
                    }
                    break;

                default:
                    cout << "Invalid selection" << endl;
                    break;
            }
        cout << "Do you want to add more items? (y/n): " << endl;
        cin >> yn;
        }
        else{
            break;
        }
    }
    cout << "Total price is RM " << price;
}

int main(){
    cout << "--------------------------------------------------------------" << endl;
    cout << "\t\t Welcome to Vegetable Farm X" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "Please select your prefered items: " << endl;
    cout << "A. Monthly Growner 1-Leafy" << endl;
    cout << "B. Monthly Growner 2-Leafy" << endl;
    cout << "C. Monthly Growner 3-Leafy" << endl;
    cout << "D. Monthly Growner 1-Fruity" << endl;
    cout << "E. Monthly Growner 2-Fruity" << endl;
    cout << "F. Annual Growner 1-Leafy" << endl;
    cout << "G. Annual Growner 2-Leafy" << endl;
    cin >> response;
        switch (toupper(response)){
            case 'A':
                cout << "Please select the following: " << endl;
                cout << "1. Salad Lettuce" << endl;
                cout << "2. Hearty Asian Greens" << endl;
                cout << "3. Salad & Asian mix" << endl;
                cin >> selection;
                    switch (selection)
                    {
                    case 1:
                        price += 105;
                        break;
                
                    case 2:
                        price += 105;
                        break;

                    case 3:
                        price += 105;
                        break;
                
                    default:
                        cout << "Invalid selection" << endl;
                        break;
                    }
            
                break;

            case 'B':
                cout << "Please select the following: " << endl;
                cout << "1. Salad Lettuce" << endl;
                cout << "2. Hearty Asian Greens" << endl;
                cout << "3. Salad & Asian mix" << endl;
                cin >> selection;
                    switch (selection)
                    {
                    case 1:
                        price += 189;
                        break;
                
                    case 2:
                        price += 189;
                        break;

                    case 3:
                        price += 189;
                        break;
                
                    default:
                        cout << "Invalid solution" << endl;
                        break;
                    
                }
                break;
        
            case 'C':
                cout << "Please select the following: " << endl;
                cout << "1. Salad Lettuce" << endl;
                cout << "2. Hearty Asian Greens" << endl;
                cout << "3. Salad & Asian mix" << endl;
                cin >> selection;
                    switch (selection)
                    {
                    case 1:
                        price += 270;
                        break;
                
                    case 2:
                        price += 270;
                        break;

                    case 3:
                        price += 270;
                        break;
                
                    default:
                        cout << "Invalid selection" << endl;
                        break;
                    
                }
                break;
        
            case 'D':
                price += 130;
                break;

            case 'E':
                price += 260;
                break;

            case 'F':
                cout << "Please select the following: " << endl;
                cout << "1. Salad Lettuce" << endl;
                cout << "2. Hearty Asian Greens" << endl;
                cout << "3. Salad & Asian mix" << endl;
                cin >> selection;
                    switch (selection)
                    {
                    case 1:
                        price += 1200;
                        break;
                
                    case 2:
                        price += 1200;
                        break;

                    case 3:
                        price += 1200;
                        break;
                
                    default:
                        cout << "Invalid selection" << endl;
                        break;
                    }
                break;

            case 'G':
                cout << "Please select the following: " << endl;
                cout << "1. Salad Lettuce" << endl;
                cout << "2. Hearty Asian Greens" << endl;
                cout << "3. Salad & Asian mix" << endl;
                cin >> selection;
                    switch (selection)
                    {
                    case 1:
                        price += 2200;
                        break;
                
                    case 2:
                        price += 2200;
                        break;

                    case 3:
                        price += 2200;
                        break;
                
                    default:
                        cout << "Invalid selection" << endl;
                        break;
                }
                break;

        default:
            cout << "Invalid selection" << endl;
            break;
    }
    
    cout << "Do you want to add more items? (y/n): " << endl;
    cin >> yn;
    loop();
}

