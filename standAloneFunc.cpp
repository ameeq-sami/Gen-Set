#include"sets.h"
template <class setType>
void input_Set(Set<setType> &set)
{
    setType input;
    int size = 0;    // size with dublicates
    int newsize = 0; // size without duplicates
    cout << "Enter Size of Set: " << endl;
    cin >> size;
    set.updateSize(size);
    for (int i = 0; i < set.getSize(); i++) // taking input for set 1
    {
        cout << "Enter " << i << "th element of set: " << endl;
        cin >> ws >> input;
        if (set.setSetIndex(input, newsize))
        {
            newsize++;
        }
    }

    if (newsize < set.getSize()) // update size after filtering duplicates
    {
        set.updateSize(newsize);
    }
}
void menu()
{
    Set<int> Int_set1(0);
    Set<int> Int_set2(0);
    Set<char> char_set1(0);
    Set<char> char_set2(0);

    int choice;
    char sub_choice;
    bool int_inputLocked = 0, char_inputLocked = 0;
    while (1)
    {
        cout << "----- Set Operations Menu -----" << endl;
        cout << "1. Input Sets" << endl;
        cout << "2. Display Sets" << endl;
        cout << "3. Union" << endl;
        cout << "4. Intersection" << endl;
        cout << "5. Difference (A - B)" << endl;
        cout << "6. Difference (B - A)" << endl;
        cout << "7. Check Subset" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {

            cout << "----You selected: Input Sets----\n";
            cout << "Press a for integer set: " << endl;
            cout << "Press b for character set: " << endl;
            cin >> sub_choice;
            if (sub_choice == 'a') // for interget set
            {
                if (int_inputLocked == 0)
                {
                    cout << "-- Enter Elements of Set 1 --" << endl;
                    input_Set(Int_set1);
                    cout << "-- Enter Elements of Set 2 --" << endl;
                    input_Set(Int_set2);
                    int_inputLocked = 1;
                }
                else {cout << "Integer Set Input Is locked, you can input sets only one time"<<endl;}
                                
            }
            else if (sub_choice == 'b') // for character set
            {
                if (char_inputLocked == 0)
                {
                    cout << "-- Enter Elements of Set 1 --" << endl;
                    input_Set(char_set1);
                    cout << "-- Enter Elements of Set 2 --" << endl;
                    input_Set(char_set2);
                    char_inputLocked = 1;
                }
                else
                {cout << "Character Set Input Is locked, you can input sets only one time"<<endl;}

            }
        }
        else if (choice == 2)
        {
            cout << "---- You selected: Display Sets ----\n";
            cout << "Press a for integer set: " << endl;
            cout << "Press b for character set: " << endl;
            cin >> sub_choice;
            if (sub_choice == 'a' && int_inputLocked == 1)
            {
                cout << "Set 1:" << endl;
                Int_set1.display();
                cout << "Set 2:" << endl;
                Int_set2.display();
            }
            else if (sub_choice == 'b' && char_inputLocked == 1)
            {
                cout << "Set 1:" << endl;
                char_set1.display();
                cout << "Set 2:" << endl;
                char_set2.display();
            }
            else
            {
                cout << "Set 1:" << endl;
                cout << "{}" << endl;
                cout << "Set 2:" << endl;
                cout << "{}" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "---- You selected: Union ----\n";
            cout << "Press a for integer set: " << endl;
            cout << "Press b for character set: " << endl;
            cin >> sub_choice;
            if (sub_choice == 'a' && int_inputLocked == 1)
            {
                cout << "Union:   ";
                Int_set1.Union(Int_set2).display();
            }
            else if (sub_choice == 'b' && char_inputLocked == 1)
            {
                cout << "Union:   ";
                char_set1.Union(char_set2).display();
            }
            else
            {
                cout << "Set 1:" << endl;
                cout << "{}" << endl;
                cout << "Set 2:" << endl;
                cout << "{}" << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "---- You selected: Intersection ----\n";
            cout << "Press a for integer set: " << endl;
            cout << "Press b for character set: " << endl;
            cin >> sub_choice;
            if (sub_choice == 'a' && int_inputLocked == 1)
            {
                cout << "Intersection:   ";
                Int_set1.intersection(Int_set2).display();
            }
            else if (sub_choice == 'b' && char_inputLocked == 1)
            {
                cout << "Intersection:   ";
                char_set1.intersection(char_set2).display();
            }
            else
            {
                cout << "Set 1:" << endl;
                cout << "{}" << endl;
                cout << "Set 2:" << endl;
                cout << "{}" << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "---- You selected: Difference (A - B) ----\n";
            cout << "Press a for integer set: " << endl;
            cout << "Press b for character set: " << endl;
            cin >> sub_choice;
            if (sub_choice == 'a' && int_inputLocked == 1)
            {
                cout << "Diffrence:   ";
                Int_set1.diffrence(Int_set2).display();
            }
            else if (sub_choice == 'b' && char_inputLocked == 1)
            {
                cout << "Difference:   ";
                char_set1.diffrence(char_set2).display();
            }
            else
            {
                cout << "Set 1:" << endl;
                cout << "{}" << endl;
                cout << "Set 2:" << endl;
                cout << "{}" << endl;
            }
        }
        else if (choice == 6)
        {
            cout << "---- You selected: Difference (B - A) ----\n";
            cout << "Press a for integer set: " << endl;
            cout << "Press b for character set: " << endl;
            cin >> sub_choice;
            if (sub_choice == 'a' && int_inputLocked == 1)
            {
                cout << "Diffrence:   ";
                Int_set2.diffrence(Int_set1).display();
            }
            else if (sub_choice == 'b' && char_inputLocked == 1)
            {
                cout << "Difference:   ";
                char_set2.diffrence(char_set1).display();
            }
            else
            {
                cout << "Set 1:" << endl;
                cout << "{}" << endl;
                cout << "Set 2:" << endl;
                cout << "{}" << endl;
            }
        }
        else if (choice == 7)
        {
            cout << "---- You selected: Check Subset ----\n";
            cout << "Press a for integer set: " << endl;
            cout << "Press b for character set: " << endl;
            cin >> sub_choice;
            if (sub_choice == 'a' && int_inputLocked == 1)
            {
                cout << "Is Set1 Subset of Set 2:   ";
                if (Int_set1.isSubSet(Int_set2))
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;

                cout << "Is Set2 Subset of Set 1:   ";
                if (Int_set2.isSubSet(Int_set1))
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else if (sub_choice == 'b' && char_inputLocked == 1)
            {
                cout << "Is Set1 Subset of Set 2:   ";
                if (char_set1.isSubSet(char_set2))
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;

                cout << "Is Set2 Subset of Set 1:   ";
                if (char_set2.isSubSet(char_set1))
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
        }
        else if (choice == 8)
        {
            cout << "Exiting program.\n";
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again.\n";
        }

        cout << endl;
    }
}