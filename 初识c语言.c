#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



//�ṹ��--�������Ӷ���--�Լ����������һ������
//���Ӷ���---���ˣ��顭��
//��---����ߣ����أ����䡭��
//struct Book//�����ṹ������
//{
//    char name[20];//C���Գ������
//    short price;//55
//};
//int main()
//{
//    struct Book  b1 = {"C���Գ������",55};    //���ýṹ�����ʹ���һ�������͵Ľṹ�����
//    //�޸Ľṹ���ڲ��ı���
//    strcpy(b1.name,"C++");//strcpy--string copy---�ַ�������--�⺯��--string.h
//    struct Book *pb=&b1;//����pb��ӡ�������ͼ۸�
//    printf("%s\n",(*pb).name);//���ִ�ӡ����   (*pb).�ṹ�������Ա      pb->�ṹ�������Ա
//    printf("%d\n",(*pb).price);
//    printf("%s\n",pb->name);
//    printf("%d\n",pb->price);
//    printf("������%s\n",b1.name);
//    printf("�۸�%dԪ\n",b1.price);
//    b1.price = 15;
//    printf("�޸ĺ�ļ۸�:%dԪ\n",b1.price);
//    return 0;
//}
//ָ ��
//int main()
//{
//    char ch='w';
//    char* pc=&ch;
//    *pc='a';
//    printf("%d\n",sizeof(pc));//32λ��ƽָ̨��ռ�ĸ�ֱ�ӣ�64λռ�˸�
//    printf("%c\n",ch);
//    return 0;
//}
//int main()
//{
//    int a = 10 ;//���ڴ���վ�ĸ��ֽ�
//    int* p = &a;//&a��ȡ��a�ĵ�ַ
//    //ָ�����---������ŵ�ַ��
//    printf("%p\n",&a);
//    printf("%p\n",p);
//    *p=20;//*--�����ò�����
//    printf("%d\n",a);
//    return 0;
//}

////define���峣���ͺ�
////#define MAX 100//�����ʶ������
////define���Զ����--������
////������ʵ��
//int Max(int x, int y)
//{
//        if(x>y){
//            return x;
//        }
//        else{
//            return y;
//        }
//}
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//    int a=10;
//    int b=20;
//    //����
//    int max=Max(a,b);
//    printf("max=%d\n",max );
//    //��ķ�ʽ
//    max= MAX(a, b);//max=(a>b?a:b);
//    printf("max=%d\n",max);
//    return 0;
//}
//static���ξֲ��������������ڱ䳤��
/*static����ȫ�ֱ����ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ�����
��Դ�ļ���ʹ�ã�����Դ�ļ���û����ʹ����*/
//static���κ����ı��˺������������ԣ��ⲿ��������--->�ڲ���������
//void test()
//{
//    static int a=1;//��̬�ֲ�����,a�ᱣ����һ�ε��õ�ʱ���ֵ��
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

////�ؼ��֣�int float .......��
//int main()
//{
//    auto int a =10;//�ֲ�����--�Զ�����--ǰ�涼����aotu�����ձ�ʡ��
//    register int a =10;//�����a����ɼĴ��������������ܲ��ܷŽ�ȥȡ���ڱ�����
//    signed  int ;//int����ı������з��ŵģ�signed intҲ���з��ű�����ͨ��ʡ��signed
//    unsigned int;//���޷��ű�������˼�����۷�ʲô���ֽ�ȥ��������
//    extern int  a;//�����ⲿ���ţ�
//    extern int Add(int ,int);//�����ⲿ����
//    struct//�ṹ��ؼ���
//    union//�����������
//    typedef//���Ͷ��壨�����ض��壩
//    typedef unsigned int u_int;//�൱�ڸ�unsigned int ����ºŽ�u_����д
//    u_int num1 = 20;//=unsigned intnum1 = 20
//
//    return 0;
//}

//int Add(int x,int y)//����
//{
//    int z=0;
//    z=x+y;
//    return z;
//}
//int main()
//{
//    int arr[10]={0};
//    arr[4];//[ ]--�±����ò�����
//    int a=10;
//    int b=20;
//    int sum;
//    sum=Add(a,b);//�����������ò�����
//    printf("sum=%d",sum);
//    return 0;
//}

//��������������Ŀ��������
//int main()
//{
//     int a=10;
//     int b=20;
//     int max=0;//ȡ���ֵ
//     max=(a>b?a:b);//��Ŀ�����������a>bΪ����ô�������a�͸�ֵ��max�����a>bΪ����ô b�͸�ֵ��max
//     printf("max=%d",max);
//     return 0;
//}

//��ifȡ���ֵ
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
//�߼�������&&��||
//int main()
//{
//    int a=0;//��---0
//    int b=5;//��---��0
//    int c=a&&b;//&&�߼�����һ���پ��Ǽ٣�������Ϊ���Ϊ��
//    int d=a||b;// ��||���߼���ֻҪ��һ��Ϊ���Ϊ�棬�������ٲ�Ϊ��
//    printf ("%d %d",c,d);
//    return 0;
//}
//()ǿ��ת��
//int main()
//{
//    int a=(int)3.14;//ǿ��ת������3.14ת��Ϊһ�����α���
//    int b=(int)5.23;
//    printf("a=%d b=%d",a,b);
//    return 0;
//}

////++   --������
//int main()
//{
//    int a =10;
//    int c =20;
//    int b=a++;//����++�����ȸ�ֵ��++  --ͬ��
//    int d =++c;//ǰ��++������++�ڸ�ֵ
//    printf("a=%d b=%d c=%d d=%d",a,b,c,d);
//    return 0;
//}
//



//Դ�룬���룬���룬ԭ�����λ��������ȡ��=���룬����+1=���룬����-1=���룬���밴λȡ��=ԭ��
//�ڴ浱�д���Ķ�����Ϊ����
//int main()
//{
//    int a=0;//00000000000000000000000000000000
//    int b=~a;//11111111111111111111111111111111,
//    printf("%d",b);
//    return 0;
//}

//����
//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};//���ʮ���������ֵ�����,��һ��Ԫ�ص��±�� 0 ��ʼ
//    //char ch[20];//���20���ַ�������
//    //float arr2[5];//���5��������������
//    int i = 0;
//    while(i<10)
//    {
//    printf("%d\t",arr[i]);
//    i++;
//    }
//    return 0;
//}

//����
//int Add(int x, int y)//Add�����Լ�����ĺ���
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


//ѭ�����֮  1  whileѭ��
//int main()
//{
//     int line =0;
//    printf("�������\n");
//    while(line<10000)
//    {
//
//    printf("��һ�д��� %d\n",line);
//    line++;
//
//    }
//    printf("����һ����offer\n");
//    return 0;
//}
////ѡ�����
//int main()
//{
//    int input = 0;
//    printf("�������\n");
//    printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//    scanf("%d",&input);
//    if(input==1)
//    {
//        printf("����һ����offer\n");
//    }
//    else
//        printf("������ȥ�ɣ�\n");
//    return 0;
//}
//ת���ַ�--ת��ԭ������˼--����\n ,\0,\t--ˮƽ�Ʊ��,\\--��ʾһ����б�ܷ�ֹ\������Ϊת�����з���\x+������ʮ������ ֻ��һ���ַ��� \+�����ǰ˽��� ֻ��һ���ַ�
//int main()
//{
//    printf("%c\n",'\x61');//��ӡʮ�����ƶ�Ӧ��ʮ����֮���Ӧ��ASCII��ֵ������ַ�
//    printf("%d\n",strlen("c:\test\32\test.c"));//  �ַ�������13  \tΪһ��ת���ַ�  \32�������˽������֣�Ϊ�˽�������ת��Ϊʮ����֮���Ӧ��ASCII��ֵ������ַ�
//    printf("%c\n",'\132');//\132�������˽������֣�Ϊ�˽�������ת��Ϊʮ����֮���Ӧ��ASCII��ֵ������ַ� ��ӡ����һ�� Z
//    printf("%c\n",'\'');//   \'��ʾ��ӡһ����
//    printf("%s\n","\"");//  \"��ʾ��ӡһ����
//    return 0;
//}
//�ַ���   ���硰kalr���������Ķ��������ַ���
//int main()
//{
//    char arr1[] = "abc";//�������ַ���  //'abc'---'a' 'b' 'c' '\0'---'\0'���ַ����Ľ�����־
//    char arr2[] ={'a','b','c','\0'};
//    printf ("%s\n",arr1);//�ַ�����%s���
//    printf ("%s\n",arr2);
//    printf ("%d\n",strlen(arr1));//strlen--�����ַ�������
//    printf ("%d\n",strlen(arr2));
//    return 0 ;
//}
////}
//    1.//ֱ��дһ��ֵ�������泣��
//    2.//const int num = 4;��˼��num�����ڸı��ˣ�const���εĳ�����
//    const int n = 10;
//
//    printf("%d",n);
//    return 0;

//    3.#define MAX 10   ���峣���ı�ʶ��
//int main()
//{
//    int arr[MAX]={};
//    printf("%d\n",MAX);
//    return 0;
//}
//  4. ö�ٳ��� ö�پ���һһ�о�,���ܸ�
//�Ա� �� Ů ����
//��ԭɫ �����
//���� 1 2 3 4 5 6 7
//enum Sex
//{
//    MALE,
//    FEMALE,
//    SECRET,
//};
////MALE,    FEMALE,    SECRET,-ö�ٳ���
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

//  printf("%s is the best man %s %s"," karl","ever","seen");%s��ʾ�ַ���һ�����ݣ��⴫������Ҫ˫����
//  printf("i'm %d years old",20);%d��ʾһ��������%f��ʾһ��С�������6λ��������С������Ҫ˫����
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
    //variable   �൱����ѧ��x  y
    //string terninator  "karl clarke
    //char int float
    //array
    char name [] = "karl clarke";//ͬһ���ڿ��Բ������ַ����ĳ��ȣ����������ͬһ����Ҫ�����ַ�������
    strcpy(name,"karl");//�ı�һ�����ַ�������������
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
    //int a = (4+5)*6;//pow()�˷�
    printf("%f \n",pow(5,10));//pow(5,10)5��ʮ�η���pow�����ֵ�Ǹ�����float�������%d�������0
    printf("%f",sqrt(25));//sqrt��25���Ǹ�25��ƽ����Ҳ�Ǹ�����
    */

  /*  float age1 , age2 , age3 , average ;
    age1 = age2 = 5.0;
    scanf("%f",&age3);
    average = (age1 + age2 + age3)/3;
    printf("ƽ��������%f",average);
*/
/*
    //typecasting�ı���������
    float avgprofit;
    int priceticket = 80;
    int amount = 600;
    int dayworked = 7;

    avgprofit = ((float)priceticket* (float)amount)/ (float)dayworked;//ǰ��޸���float����ʱ�ı�һ��
    printf("ÿ��׬��$%.2f\n",avgprofit);

    printf("%f",(float)1/(float)3*0.3);

*/
//    int num1=0;
//    int num2=0;
//    printf("������������\n");
//    scanf("%d%d",&num1 ,&num2 );
//    int sum=num1+num2;
//    printf("%d",sum);

