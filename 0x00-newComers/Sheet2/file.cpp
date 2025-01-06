// #include <iostream>
// using namespace std;

// int main()
// {
//   int b1, b2;
//   cin >> b1 >> b2;
//   bool counter = 0;

//   int temp, digit;
//   for (int i = b1; i <= b2; i++)
//   {
//     bool flag = 0;
//     temp = i;
//     while (temp)
//     {
//       digit = temp % 10;
//       if (digit != 4 && digit != 7)
//         break;
//       else
//         flag = 1;

//       temp /= 10;
//     }
//     if (flag)
//     {
//       cout << i << " ";
//       counter = 1;
//     }
//   }
//   if (!counter)
//     cout << -1;
//   return 0;
// }