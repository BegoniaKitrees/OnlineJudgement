//�⼸����OJ���ҳ�����ǰ��һЩ����Ƭ�Σ�������������Ҳο���
//
//
//1���ض�������
#ifndef _OJ_
freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#endif


2���������롢���
//���ʺϴ���������
/*
int ScanDouble()     //������ double 
{
double dble=0, ch;
if(ch>='0' && ch<='9')
dble=ch-'0';
while((ch=getchar())>='0' && ch<='9')
dble=dble*10+ch-'0';
return dble;
}
*/
int ScanUInt()     //������ int
{
int unSignedInt=0, ch;
if(ch>='0' && ch<='9')
unSignedInt = ch-'0';
while((ch=getchar())>='0' && ch<='9')
unSignedInt = unSignedInt*10 + ch-'0';
return unSignedInt;
}


void OutputDouble(double a)     //��� double 
{
if(a>9)
OutputDouble(a/10);
putchar((int)a %10+'0');
}


void OutputUSignedInt(int a)    //��� int
{
if(a>9)
OutputUSignedInt(a/10);
putchar(a%10+'0');
}


void OutputLongLong(long long a)     //��� double 
{
if(a>9)
OutputLongLong((int) a/10);
putchar((int)a %10+'0');
}






int N;
N=ScanUInt(); // scanf("%u",&N); //printf("%u\n", N);
//scanf("%d/n", &N); // int
//const int MAXS = 80000000; // ʵ�ʿɶ�ȡ  7999 9999 
char * buf; //char buf[MAXS]; �������ޱȽ�С 
buf=new char[N*20];
int len = fread(buf, 1, N*20, stdin);
buf[len] = '\0';


    // ... ...
delete []buf;




//����Ƭ�Σ���Ҫ�Ǵ�������ʱ�Ŀ������룬�����������OJ����ʱ��
//�����cin��cout��ѭ�������ȡ�������ʱ��Ч����ͨ���ǲ����ġ�

