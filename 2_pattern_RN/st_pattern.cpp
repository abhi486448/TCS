#include <bits/stdc++.h>
using namespace std;

void pattern1(int N)
{

    // 1234
    // 123
    // 12
    // 1

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern2(int N)
{
    //         *
    //       * * *
    //     * * * * *
    //   * * * * * * *
    // * * * * * * * * *

    for (int i = 0; i < N; i++)
    {
        // part 1 " "
        for (int j = 0; j < N - i + 1; j++)
        {
            cout << "  ";
        }
        // part 2 " *"
        for (int k = 0; k <= i; k++)
        {
            cout << " *";
        }
        // part 3 " *"
        for (int l = 1; l <= i; l++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

void pattern3(int N)
{
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    for (int i = 1; i <= N; i++)
    {
        // part 1 " "
        for (int j = 2; j <= i; j++)
        {
            cout << " ";
        }

        // part 2 "*"
        for (int k = 1; k < 2 * (N - i + 1); k++)
        {
            cout << "*";
        }

        // part 3 " "
        for (int j = 2; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern4(int N)
{
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    for (int i = 1; i <= N; i++)
    {
        // part 1 " "
        for (int j = 1; j < N - i + 1; j++)
        {
            cout << " ";
        }
        // part 2 "*"
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        // part 3 "*"
        for (int l = 2; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= N; i++)
    {
        // part 1 " "
        for (int j = 2; j <= i; j++)
        {
            cout << " ";
        }

        // part 2 "*"
        for (int k = 1; k < 2 * (N - i + 1); k++)
        {
            cout << "*";
        }

        // part 3 " "
        for (int j = 2; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern5(int N)
{
    // *
    // **
    // ***
    // ****
    // *****
    // ******
    // *****
    // ****
    // ***
    // **
    // *

    // part 1
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // part 2
    for (int i = N - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int N)
{
    for (int i = 1; i <= N; i++)
    {
        bool flag = (i % 2);
        for (int j = 1; j <= i; j++)
        {
            if (flag == 1)
            {
                cout << flag << " ";
                flag = 0;
            }
            else
            {
                cout << flag << " ";
                flag = 1;
            }
        }
        cout << endl;
    }
}

void pattern7(int N)
{
    for (int i = 1; i <= N; i++)
    {
        // part 1
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // part 2
        for (int k = 1; k <= 2 * N - i - i; k++)
        {
            cout << " ";
        }

        // part 3
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
}

void pattern8(int N)
{
    int num = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern9(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern10(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (char j = 'A'; j <= 'A' + (N - i); j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern11(int N)
{
    char let = 'A';
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << let;
        }
        let++;
        cout << endl;
    }
}

void pattern12(int N)
{
    for (int i = 0; i < N; i++)
    {
        // part 1
        for (int j = 1; j < N - i + 1; j++)
        {
            cout << "  ";
        }

        // part 2
        for (char k = 'A'; k <= 'A' + i; k++)
        {
            cout << k << " ";
        }

        if (i >= 1)
            {
                // part 3
                for (char j ='A'+ i-1; j >='A'; j--)
                {
                    cout <<j<< " ";
                }
            }
        cout<<endl;
    }
}

void pattern13(int N){
    for(int i=N; i>=1; i--){
        for(char j='A'+ (i-1); j<='A'+(N-1); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern14(int N){
    // part 1
    for(int i=1; i<=N; i++){
        // part 1.1
        for(int j=1; j<=N-i+1; j++){
            cout<<"*";
        }
        // part 1.2
        if(i>1){
            for(int j=2; j<=i; j++){
                cout<<"  ";
            }
        }

        // part 1.3
        for(int j=1; j<=N-i+1; j++){
            cout<<"*";
        }
        cout<<endl;

    }
    // part 2
    for(int i=1; i<=N; i++){
        // part 2.1
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        // part 2.2
        if(i<(N)){
            for(int j=1; j<N-i+1; j++){
                cout<<"  ";
            }
        }

        // part 2.3
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern15(int N){
    // part 1
    for(int i=1; i<=N; i++){
        // part 1.1
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        // part 1.2
        for(int j=N; j>i; j--){
            cout<<"  ";
        }

        // part 1.3
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // part 2
    for(int i=1; i<N; i++){
        // part 2.1
        for(int j=i; j<N; j++){
            cout<<"*";
        }

        // part 2.2
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }

        // part 2.3
        for(int j=i; j<N; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern16(int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==0||j==0||i==N-1||j==N-1){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern17(int N){
    for(int i=0; i<=2*N-2; i++){
        for(int j=0; j<=2*N-2; j++){
            int top = i;
            int left = j;
            int right = (2*N-2)-j;
            int bottum = (2*N-2)-i;
            // cout<<min(min(top, bottum), min(left, right));
            cout<<N - min(min(top, bottum), min(left, right));
        }
        cout<<endl;
    }
}

void pattern18(int n){
    int half = n/2 +1;
    for(int i=1; i<=half; i++){
        // space
        for(int j=1; j<=half-i; j++){
            cout<<" ";
        }

        //star
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }

        // space
        for(int j=1; j<=half-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=half-1; i>=1; i--){
        // space
        for(int j=1; j<=half-i; j++){
            cout<<" ";
        }

        //star
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }

        // space
        for(int j=1; j<=half-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int N;
    cin >> N;
    // pattern1(N);
    // pattern2(N);
    // pattern3(N);
    // pattern4(N);
    // pattern5(N);
    // pattern6(N);
    // pattern7(N);
    // pattern8(N);
    // pattern9(N);
    // pattern10(N);
    // pattern11(N);
    // pattern12(N);
    // pattern13(N);
    // pattern14(N);
    // pattern15(N);
    // pattern16(N);
    // pattern17(N);
    pattern18(N);
    return 0;
}