long long int n,sum1=0,sum3=0,idx1,idx3,mx=INT_MIN,i,l,r;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	l=0;
	r=n-1;
	sum1=a[l];
	sum3=a[r];
	while(l<r)
	{

		if(sum1>sum3){
		r--;
		sum3=sum3+a[r];
		}
		else if(sum3>sum1){
		l++;
		sum1=sum1+a[l];
		}
		if(sum1==sum3)
		{
			if(sum1>mx)
			mx=sum1;
			l++;r--;
			if(l!=r){
			sum1=sum1+a[l];
			sum3=sum3+a[r];
			}
		}
	}
	if(mx==INT_MIN)
	cout<<"0"<<endl;
	else
	cout<<mx<<endl;
