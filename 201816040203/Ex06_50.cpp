#include <iostream>

using namespace std;
double tripleByValue( double x)
{
    x=3*x;
    return x;
}
double tripleByReference(double &x)
{
    x=3*x;
    return x;
}
int main()
{
    double x,y;
    cin >> x; //输入 count的值
    if(!cin)  //判断类型
    {
        cout <<"错误"; //如果不是double类型 显示错误
        return 0;
    }
else//如果是double类型 则继续
   {
    y=tripleByValue(x);
    cout << "三倍count值 " << y<< endl; //计算后输出结果
    cout << "按引用传递:";
    tripleByReference(x);
    cout << "通过引用传递，count改变为 "<<x<<endl; //改变count的值，输出
}

    return 0;
}
