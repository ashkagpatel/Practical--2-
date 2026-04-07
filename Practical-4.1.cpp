#include <iostream>
using namespace std;

int main()
{
    int *arr = NULL;
    int size = 0;
    int choice,value,pos;

do{

        cout<<"1.Insert"<<endl;
        cout<<"2.Delete"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter choice: ";
        cin >> choice;

        switch(choice)
        {

            case 1:
            {
                cout << "Enter value: ";
                cin >> value;

                int *newArr = new int[size + 1];

                for (int i = 0; i < size; i++)
                    newArr[i] = arr[i];

                newArr[size] = value;
                size++;

                delete[] arr;
                arr = newArr;
                break;
            }

            case 2:
            {
                if (size == 0)
                {
                    cout << "Array is empty!";
                    break;
                }

                cout << "Enter position (0-based): ";
                cin >> pos;

                if (pos < 0 || pos >= size)
                {
                    cout << "Invalid position!";
                    break;
                }

                int *newArr = new int[size - 1];

                for (int i = 0, j = 0; i < size; i++)
                {
                    if (i != pos)
                    newArr[j++] = arr[i];
                }

                size--;

                delete[] arr;
                arr = newArr;
                break;
            }

            case 3:
            {
                if (size == 0)
                {
                    cout << "Array is empty!";
                } else
                {
                    cout << "Array: ";
                    for (int i = 0; i < size; i++)
                    cout << arr[i] << " "<<endl;
                }
                break;
            }

            case 4:
            {
                cout << "Exiting program...\n";
                break;
            }

            default:
                cout << "Invalid choice! Try again.\n";
        }
} while (choice != 4);


    delete[] arr;
    return 0;
}
