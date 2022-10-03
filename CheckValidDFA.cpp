#include <iostream>
using namespace std;

int no_of_states;
int nextStateIndex(char current_state, char states[])
{
  for (int i = 0; i < no_of_states; i++)
  {
    if (states[i] == current_state)
    {
      return i;
    }
  }
}

int main()
{

  char table[50][2];
  string check_string;
  int no_of_final_states;
  int input_symbols = 2;
  char initial_state;
  char current_state;
  char next_state;

  cout << "Enter no. of states: ";
  cin >> no_of_states;
  char states[no_of_states];

  cout << "Enter states: ";
  for (int i = 0; i < no_of_states; i++)
  {
    cin >> states[i];
  }

  cout << "Enter initial state: ";
  cin >> initial_state;
  current_state = initial_state;

  cout << "Enter number of final states : ";
  cin >> no_of_final_states;

  char final_state[no_of_final_states];
  cout << "Enter Final states : ";
  for (int i = 0; i < no_of_final_states; i++)
  {
    cin >> final_state[i];
  }

  for (int i = 0; i < no_of_states; i++)
  {
    for (int j = 0; j < input_symbols; j++)
    {
      cout << "Enter next state for " << states[i] << " state when input symbol is " << j << " : ";
      cin >> table[i][j];
    }
  }
  char choice;
  do
  {
    cout << "Enter string to check whether it can be accepted or not : ";
    cin >> check_string;

    for (int i = 0; i < check_string.length(); i++)
    {
      int tmp;
      int temp = nextStateIndex(current_state, states);
      if (check_string[i] == '0')
      {
        tmp = 0;
      }
      else
      {
        tmp = 1;
      }
      next_state = table[temp][tmp];
      cout << current_state << " -> " << check_string[i] << " -> " << next_state << endl;
      current_state = next_state;
    }

    int flag = 0;
    for (int i = 0; i < no_of_final_states; i++)
    {
      if (current_state == final_state[i])
      {
        cout << "String accepted" << endl;
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      cout << "String not accepted" << endl;
    }

    cout << "Do you want to check another string ? ";
    cin >> choice;
    current_state = initial_state;
  } while (choice == ('y' | 'Y'));
  return 0;
}
