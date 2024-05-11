//linear search :
//1- normal linaer search :
int linearS(int arr[],int s,int k)
{
	for(int i=0;i<=s;i++)
		if(arr[i]==k)
			return i;
	return -1;
}
//2-recusive using iterator :
int linearSR(int arr[],int s,int k,int i=0)
{
	if(i>s)	
		return -1;
	if(arr[i]==k)
		return i;
	return linearSR(arr,s,k,i+1);

}
//3-recusive using size
int linearSR2(int arr[],int s,int k)
{
	if(s<0)
		return -1;
	if(arr[s]==k)
		return s;
	return linearSR(arr,s-1,k);
}
