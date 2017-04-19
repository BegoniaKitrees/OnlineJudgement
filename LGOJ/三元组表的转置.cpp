#define SMax 1024
struct SPNode{
	int i,j;
	int v;
};
struct SPMatrix{
	int mu,nu,tu;//mu:ԭϡ������������nu:������tu:�ܷ���Ԫ����Ŀ 
	SPNode data[SMax+1];//��Ԫ����ڵĻ���Ԫ����SPNode 
};
SPMatrix TransMatrix(SPMatrix A)
{
	SPMatrix B;
	int p,q,col;
	B.mu = A.nu;
	B.nu = A.mu;
	B.tu = A.tu;
	//����ϡ�����Ļ�������
	if(B.tu>0){
		q = 1;
		for(col=1;col<A.nu;col++){
			for(p=1;p<A.tu;p++){
				if(A.data[p].j==col)
				{
					B.data[q].i=A.data[p].j;
					B.data[q].j=A.data[p].i;
					B.data[q].v=A.data[p].v;
					q++; 
				}
			}
		}
	} 
	return B;
}
int main()
{
	return 0;
}
