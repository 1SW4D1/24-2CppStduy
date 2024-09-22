#include<stdio.h>
int main()
{
	int a,b;
	char op;
	double ans;
	scanf("%d %c %d",&a,&op,&b);

	switch(op){
	case '+':
		ans = a + b;
		break;
	case '-':
		ans = a - b;
		break;
	case '*':
		ans = a * b;
		break;
	case '/':
		ans = (double)a / b;
		break;
	default:
		break;	
	}
	
	printf("%.2lf\n",ans);
	return 0;
}

// #include<stdio.h>
// int main()
// {
// 	int a,b;
// 	char op;
// 	double ans;
// 	scanf("%d %c %d",&a,&op,&b);
//     if(op == '+'){
//         ans = a + b;
//     }
//     else if(op == '-'){
//         ans = a - b;
//     }
//     else if(op == '*'){
//         ans = a * b;
//     }
//     else if(op == '/'){
//         ans = (double)a / b;
//     }
	
// 	printf("%lf\n",ans);
// 	return 0;
// }