// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	/* �Ʒ� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸ� ���� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   ���� ������ PC ���� �׽�Ʈ �� ����, �Է°��� input.txt�� ������ �� freopen �Լ��� ����ϸ�,
	   �� �Ʒ����� scanf �Լ� �Ǵ� cin�� ����Ͽ� ǥ���Է� ��� input.txt ���Ϸ� ���� �Է°��� �о� �� �� �ֽ��ϴ�.
	   ����, ���� PC���� freopen �Լ��� ������� �ʰ� ǥ���Է��� ����Ͽ� �׽�Ʈ�ϼŵ� �����մϴ�.
	   ��, Codeground �ý��ۿ��� "�����ϱ�" �� ������ �ݵ�� freopen �Լ��� ����ų� �ּ�(//) ó�� �ϼž� �մϴ�. */
	//freopen("input.txt", "r", stdin);

	setbuf(stdout, NULL);

	int TC;
	int test_case;
    
	scanf("%d", &TC);	// cin ��� ����
	for(test_case = 1; test_case <= TC; test_case++) {
		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�.
        
		int n,k;
		scanf("%d%d",&n,&k);
		string s;
		cin>>s;
		
		int v= 1;
		int sum = 1;
		int statey = 1;
		int statex = 1;
		int ascent = n;
		int linenum = 1;
		// y,0 -> Ȧ�� || 0,x ->¦��
		// n(n+1)/2 - n + 1 -> 1 2 4 7 
		// 
		// 1 2 6 
 		// 3 5 7
		// 4 8 9
		for(int i=0; i<s.length(); i++)
		{
			switch(s[i])
			{
			case 'R':
				statex++;
				linenum++;
				break;
			case 'D':
				statey++;
				linenum++;
				break;
			case 'L':
				statex--;
				linenum--;
				break;
			case 'U':
				statey--;
				linenum--;
				break;				
			}
			
			startvalue = 
		}

		// �� �κп��� ������ ����Ͻʽÿ�.
		printf("Case #%d\n", test_case);	// cout ��� ����
	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}