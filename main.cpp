#include <iostream>

using namespace std;



class Store
{
protected:
    int a,b,c,num1,num2,num3,selection;
};


class ClothStore:public Store
{

public:

int Male()
{
       cout<<"Types Of Male Dress:"<<endl;
       cout<<"1.Formal Shirt"<<endl;
       cout<<"2.Pant"<<endl;
       cout<<"3.Punjabi"<<endl;
       cout<<"4.Paijama"<<endl;
       cout<<"5.Shorts"<<endl;
       cout<<"6.T-Shirt"<<endl;

       cout<<"Enter your choice:"<<endl;
       cin >>num2;

switch(num2)
    {
    case 1:
        cout<<"Formal shirts Price is:1200 "<<endl;
        break;
    case 2:
        cout<<"Pants Price is :1000 "<<endl;
        break;
    case 3:
        cout<<"Punjabi Price is :1500 "<<endl;
        break;
    case 4:
        cout<<"Paijama Price is :550"<<endl;
        break;
    case 5:
        cout<<"Shorts Price is :200 "<<endl;
        break;
    case 6:
        cout<<"T-shirts Price is :500 "<<endl;
        break;
    default:
        break;
    }
}


int Female()
{

       cout<<"Types Of Female Dress:"<<endl;

       cout<<"1.Ladies Shirt"<<endl;
       cout<<"2.Ladies Jeans"<<endl;
       cout<<"3.Sharee"<<endl;
       cout<<"4.Skirt"<<endl;
       cout<<"5.Churidar"<<endl;
       cout<<"6.Gown"<<endl;



    cout<<"Enter your choice"<<endl;
    cin>>num2;

switch(num2)
    {
    case 1:
        cout<<"Ladies shirts Price is :1000 "<<endl;
        break;


    case 2:
        cout<<"Ladies Jeans Price is :1200 "<<endl;
        break;


    case 3:
        cout<<"Sharee Price is :1500 "<<endl;
        break;


    case 4:
        cout<<"Skirt Price is :700 "<<endl;
        break;


    case 5:
        cout<<"Churidar Price is :300 "<<endl;
        break;

    case 6:
        cout<<"Gown Price is :1000 "<<endl;
        break;

    default:
        break;

    }
}

int Kides()
{

       cout<<"Types Of Female Dress:"<<endl;

       cout<<"1.Ladies Shirt"<<endl;
       cout<<"2.Ladies Jeans"<<endl;
       cout<<"3.Sharee"<<endl;
       cout<<"4.Skirt"<<endl;
       cout<<"5.Churidar"<<endl;
       cout<<"6.Gown"<<endl;



    cout<<"Enter your choice"<<endl;
    cin>>num2;

switch(num2)
    {
     case 1:
        cout<<"Kids t-shirts Price is :690 "<<endl;
        break;


     case 2:
        cout<<"Kids pant Price is :500 "<<endl;
        break;


     case 3:
        cout<<"kids cap Price is :200 "<<endl;
        break;


     case 4:
        cout<<"skirt Price is :550 "<<endl;
        break;


     case 5:
        cout<<"shoes Price is :350 "<<endl;
        break;

     default:
        break;

  }
 }
};

class calculator:public Store
{

public:



int Calcu()
{

    int x,y,total=0,selection;

    cout << "Please enter the Price:";
    cin >> x;

    cout << "Please enter the Quantity:";
    cin >> y;

    cout << "\n\n";

    cout << "Select the desired function:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "Selection: ";
    cin >> selection;

    cout << "\n\n\n";

 }
};


int main()
{
    ClothStore cloth;

  cout<<"\t----FASHION ART----"<<endl;
  cout<<"\t-----------------------"<<endl;
  cout<<"\t-----------------------"<<endl;
  cout<<"What type of dress you want??"<<endl;
  cout<<"1.Male"<<endl;
  cout<<"2.Female"<<endl;
  cout<<"3.Kids"<<endl;
  cout<<"---------------------"<<endl;



  cout <<"Enter a number:"<< endl;

  int input;
  cin >> input;




  if (input==1)
  {
    cloth.Male();
  }
  else if (input==2)
  {
     cloth.Female();
  }
  else if (input==3)
  {
    cloth.Kides();
  }

return 0;


}
