#include <iostream>
using namespace std;
int main()
{
    int m1[3][3],m2[3][3],m3[3][3]={{0}};
    cout<<"****************************************************"<<endl;
    cout<<"              MATRIX MULTIPLICATION"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"Enter First Matrix :"<<endl;
    for(int i=0;i<3;i++)    /* for input of matrix 1 */
    {
        for(int j=0;j<3;j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"Enter Second Matrix :"<<endl;
    for(int j=0;j<3;j++)    /* for input of matrix 2 */
    {
        for(int k=0;k<3;k++)
        {
            cin>>m2[j][k];
        }
    }
    cout<<"Your First Matrix :"<<endl;
     for(int i=0;i<3;i++)    /* for output of matrix 1 */
    {
        for(int j=0;j<3;j++)
        {
            cout<<m1[i][j];
        }
        cout<<endl;
    }
     cout<<"Your Second Matrix :"<<endl;
    for(int j=0;j<3;j++)    /* for output of matrix 2 */
    {
        for(int k=0;k<3;k++)
        {
            cout<<m2[j][k];
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Your Resultant Matrix :"<<endl;
    for(int i=0;i<3;i++)    /* for multiplication of first and second matrix */
    {
        for(int k=0;k<3;k++)
        {
            for(int j=0;j<3;j++)
            {
                m3[i][k]=m3[i][k]+(m1[i][j]*m2[j][k]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int k=0;k<3;k++)
        {
           cout<<m3[i][k];
        }
        cout<<endl;
    }

    return 0;
}
