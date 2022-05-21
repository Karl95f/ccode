#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



//结构体--描述复杂对象--自己创造出来的一种类型
//复杂对象---（人，书……
//人---（身高，体重，年龄……
//struct Book//创建结构体类型
//{
//    char name[20];//C语言程序设计
//    short price;//55
//};
//int main()
//{
//    struct Book  b1 = {"C语言程序设计",55};    //利用结构体类型创建一个该类型的结构体变量
//    //修改结构体内部的变量
//    strcpy(b1.name,"C++");//strcpy--string copy---字符串拷贝--库函数--string.h
//    struct Book *pb=&b1;//利用pb打印出书名和价格
//    printf("%s\n",(*pb).name);//两种打印方法   (*pb).结构体变量成员      pb->结构体变量成员
//    printf("%d\n",(*pb).price);
//    printf("%s\n",pb->name);
//    printf("%d\n",pb->price);
//    printf("书名：%s\n",b1.name);
//    printf("价格：%d元\n",b1.price);
//    b1.price = 15;
//    printf("修改后的价格:%d元\n",b1.price);
//    return 0;
//}
//指 针
//int main()
//{
//    char ch='w';
//    char* pc=&ch;
//    *pc='a';
//    printf("%d\n",sizeof(pc));//32位的平台指针占四个直接，64位占八个
//    printf("%c\n",ch);
//    return 0;
//}
//int main()
//{
//    int a = 10 ;//在内存中站四个字节
//    int* p = &a;//&a是取出a的地址
//    //指针变量---用来存放地址的
//    printf("%p\n",&a);
//    printf("%p\n",p);
//    *p=20;//*--解引用操作符
//    printf("%d\n",a);
//    return 0;
//}

////define定义常量和宏
////#define MAX 100//定义标识符常量
////define可以定义宏--带参数
////函数的实现
//int Max(int x, int y)
//{
//        if(x>y){
//            return x;
//        }
//        else{
//            return y;
//        }
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//    int a=10;
//    int b=20;
//    //函数
//    int max=Max(a,b);
//    printf("max=%d\n",max );
//    //宏的方式
//    max= MAX(a, b);//max=(a>b?a:b);
//    printf("max=%d\n",max);
//    return 0;
//}
//static修饰局部变量，生命周期变长，
/*static修饰全局变量改变了变量的作用域，让静态的全局变量只能在自己所在
的源文件内使用，出了源文件就没法在使用了*/
//static修饰函数改变了函数的链接属性，外部链接属性--->内部链接属性
//void test()
//{
//    static int a=1;//静态局部变量,a会保存上一次调用的时候的值，
//    a++;
//    printf("a=%d\n",a);
//}
//int main()
//{
//    int i = 0;
//    while(i<5)
//    {
//        test();
//        i++;
//    }
//    return 0;
//}

////关键字：int float .......等
//int main()
//{
//    auto int a =10;//局部变量--自动变量--前面都会有aotu但是普遍省略
//    register int a =10;//建议把a定义成寄存器变量，最终能不能放进去取决于编译器
//    signed  int ;//int定义的变量是有符号的，signed int也是有符号变量，通常省略signed
//    unsigned int;//是无符号变量，意思是无论放什么数字进去都是正数
//    extern int  a;//声明外部符号，
//    extern int Add(int ,int);//声明外部函数
//    struct//结构体关键字
//    union//联合体或共用体
//    typedef//类型定义（类型重定义）
//    typedef unsigned int u_int;//相当于给unsigned int 起个绰号叫u_方便写
//    u_int num1 = 20;//=unsigned intnum1 = 20
//
//    return 0;
//}

//int Add(int x,int y)//函数
//{
//    int z=0;
//    z=x+y;
//    return z;
//}
//int main()
//{
//    int arr[10]={0};
//    arr[4];//[ ]--下标引用操作符
//    int a=10;
//    int b=20;
//    int sum;
//    sum=Add(a,b);//（）函数调用操作符
//    printf("sum=%d",sum);
//    return 0;
//}

//条件操作符（三目操作符）
//int main()
//{
//     int a=10;
//     int b=20;
//     int max=0;//取最大值
//     max=(a>b?a:b);//三目操作符：如果a>b为真那么？后面的a就赋值给max，如果a>b为假那么 b就赋值给max
//     printf("max=%d",max);
//     return 0;
//}

//用if取最大值
//int main()
//{
//    int a=10;
//    int b=20;
//    int max=0;
//    if(a>b)
//    {
//        printf("max=%d",a);
//    }
//    else
//    {
//        printf("max=%d",b);
//    }
//
//    return 0;
//}
//逻辑操作符&&，||
//int main()
//{
//    int a=0;//假---0
//    int b=5;//真---非0
//    int c=a&&b;//&&逻辑与有一个假就是假，两个都为真才为真
//    int d=a||b;// ‘||’逻辑或只要有一个为真就为真，两个都假才为假
//    printf ("%d %d",c,d);
//    return 0;
//}
//()强制转换
//int main()
//{
//    int a=(int)3.14;//强制转换，把3.14转换为一个整形变量
//    int b=(int)5.23;
//    printf("a=%d b=%d",a,b);
//    return 0;
//}

////++   --操作符
//int main()
//{
//    int a =10;
//    int c =20;
//    int b=a++;//后置++就是先赋值在++  --同理
//    int d =++c;//前置++就是先++在赋值
//    printf("a=%d b=%d c=%d d=%d",a,b,c,d);
//    return 0;
//}
//



//源码，反码，补码，原码符号位不变其他取反=反码，反码+1=补码，补码-1=反码，反码按位取反=原码
//内存当中储存的二级制为补码
//int main()
//{
//    int a=0;//00000000000000000000000000000000
//    int b=~a;//11111111111111111111111111111111,
//    printf("%d",b);
//    return 0;
//}

//数组
//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};//存放十个整型数字的数组,第一个元素的下标从 0 开始
//    //char ch[20];//存放20给字符的数组
//    //float arr2[5];//存放5个浮点数的数组
//    int i = 0;
//    while(i<10)
//    {
//    printf("%d\t",arr[i]);
//    i++;
//    }
//    return 0;
//}

//函数
//int Add(int x, int y)//Add就是自己定义的函数
//{
//    int z=x+y;
//    return z;
//}
//int main ()
//{
//    int a= 100;
//    int b = 200;
//    int sum;
//    sum= Add(a,b);    //sum=a+b;
//    printf("%d",sum);
//    return 0 ;
//}


//循环语句之  1  while循环
//int main()
//{
//     int line =0;
//    printf("加入比特\n");
//    while(line<10000)
//    {
//
//    printf("敲一行代码 %d\n",line);
//    line++;
//
//    }
//    printf("给你一个好offer\n");
//    return 0;
//}
////选择语句
//int main()
//{
//    int input = 0;
//    printf("加入比特\n");
//    printf("你要好好学习吗？(1/0)>:");
//    scanf("%d",&input);
//    if(input==1)
//    {
//        printf("给你一个好offer\n");
//    }
//    else
//        printf("卖红薯去吧！\n");
//    return 0;
//}
//转义字符--转变原来的意思--例如\n ,\0,\t--水平制表符,\\--表示一个反斜杠防止\被解释为转义序列符，\x+数字是十六进制 只算一个字符， \+数字是八进制 只算一个字符
//int main()
//{
//    printf("%c\n",'\x61');//打印十六进制对应的十进制之后对应的ASCII码值代表的字符
//    printf("%d\n",strlen("c:\test\32\test.c"));//  字符串长度13  \t为一个转义字符  \32是两个八进制数字，为八进制数字转化为十进制之后对应的ASCII码值代表的字符
//    printf("%c\n",'\132');//\132是两个八进制数字，为八进制数字转化为十进制之后对应的ASCII码值代表的字符 打印出来一个 Z
//    printf("%c\n",'\'');//   \'表示打印一个‘
//    printf("%s\n","\"");//  \"表示打印一个”
//    return 0;
//}
//字符串   例如“kalr”括起来的东西就是字符串
//int main()
//{
//    char arr1[] = "abc";//数组存放字符串  //'abc'---'a' 'b' 'c' '\0'---'\0'是字符串的结束标志
//    char arr2[] ={'a','b','c','\0'};
//    printf ("%s\n",arr1);//字符串用%s输出
//    printf ("%s\n",arr2);
//    printf ("%d\n",strlen(arr1));//strlen--计算字符串长度
//    printf ("%d\n",strlen(arr2));
//    return 0 ;
//}
////}
//    1.//直接写一个值就是字面常量
//    2.//const int num = 4;意思是num不能在改变了，const修饰的常变量
//    const int n = 10;
//
//    printf("%d",n);
//    return 0;

//    3.#define MAX 10   定义常量的标识符
//int main()
//{
//    int arr[MAX]={};
//    printf("%d\n",MAX);
//    return 0;
//}
//  4. 枚举常量 枚举就是一一列举,不能改
//性别 男 女 保密
//三原色 红黄蓝
//星期 1 2 3 4 5 6 7
//enum Sex
//{
//    MALE,
//    FEMALE,
//    SECRET,
//};
////MALE,    FEMALE,    SECRET,-枚举常量
//int main()
//{
//    printf("%d\n",MALE);
//    printf("%d\n",FEMALE);
//    printf("%d\n",SECRET);
//
//    return 0;
//
//enum Color
//{
//    RED,
//    YELLOW,
//    BLUE,
//};
//int main()
//{
//    enum Color color = BLUE;
//
//    return 0;
//}

//  printf("%s is the best man %s %s"," karl","ever","seen");%s表示字符串一串数据，这传数据需要双引号
//  printf("i'm %d years old",20);%d表示一个整数，%f表示一个小数，最多6位，整数和小数不需要双引号
//  printf("i'm %.4f years old",3.578649);

 /*   int age;
    int currentyears;
    int birthyears;
    currentyears =56;
    birthyears =32;
    age =currentyears - birthyears;

    printf("i'm %d years old",age);
*/

/*
    //variable   相当于数学中x  y
    //string terninator  "karl clarke
    //char int float
    //array
    char name [] = "karl clarke";//同一行内可以不输入字符串的长度，但如果不在同一行内要定义字符串长度
    strcpy(name,"karl");//改变一个长字符串的所有内容
    printf("%s \n",name);
    printf("my name is %s \n",name);

    name[2] = 'z';22
    printf("%d \n",a/b);

    float c,d;
    c=60;
    d=32;
    printf("%.3f",c/d);
    */
/*
    //int a = (4+5)*6;//pow()乘方
    printf("%f \n",pow(5,10));//pow(5,10)5的十次方，pow输出的值是浮点数float，如果用%d输出就是0
    printf("%f",sqrt(25));//sqrt（25）是给25开平方，也是浮点数
    */

  /*  float age1 , age2 , age3 , average ;
    age1 = age2 = 5.0;
    scanf("%f",&age3);
    average = (age1 + age2 + age3)/3;
    printf("平均年龄是%f",average);
*/
/*
    //typecasting改变数据类型
    float avgprofit;
    int priceticket = 80;
    int amount = 600;
    int dayworked = 7;

    avgprofit = ((float)priceticket* (float)amount)/ (float)dayworked;//前面嫁个（float）暂时改变一行
    printf("每天赚了$%.2f\n",avgprofit);

    printf("%f",(float)1/(float)3*0.3);

*/
//    int num1=0;
//    int num2=0;
//    printf("输入两个数字\n");
//    scanf("%d%d",&num1 ,&num2 );
//    int sum=num1+num2;
//    printf("%d",sum);

