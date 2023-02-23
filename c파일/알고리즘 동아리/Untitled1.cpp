/*#include<iostream> 
//bits/stdc++.h
//tyredef long long ll;
using namespace std; //기본틀 만냑 이게 없으면 std:: cout<<"hello world";

int main(){
	int n;
	cin>>n; //scanf == cin
	cout<<n<<'\n';
	for (int i=0; i<n; i++){
	cout<<"hello world "<<i<<'\n'; //cout == printf 
	}
}*/

/*#include<iostream>
#include<vector> //배열 같은 느낌적인 느낌 

using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	vector<int> v; //백터자료구조 v를 정수형으로 선언하라 
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		v.push_back(i);
	}
	for(int i=0; i<n; i++){
		cout<<v[i]<<' ';
	}
}*/

/*#include<iostream>
#include<vector>

using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	vector<int> v; 
	v.push_back(1); 
	v.push_back(2); 
	v.push_back(3); 
	v.insert(v.begin()+2,4);
	for(int i=0; i<4; i++){
		cout<<v[i]<<' ';
	}
}*/

/*#include<iostream>
#include<vector>

using namespace std;

int main(){
	int max=-1000000,min=1000000,N;
	cin >> N;
	vector<int> v(N); 
	for(int i=0; i<N; i++){
		cin >> v[i];}
		
	for(int i=0; i<N; i++){
		max=max>v[i]?max:v[i];
		min=min<v[i]?min:v[i];
		// a=max(a,v[i]);
		// a=min(a,v[i]);
		}
	
	cout<<min<<' '<<max;
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	int cam=0;
	vector<int> a(42,0);
	
	for(int i=0; i<10;i++){
		int v;
		cin >> v;
		a[v%42]++;
	}
	for(int i=0; i<42;i++){
		if(a[i]>0){
			cam++;
		}
	}
	cout<<cam;
}*/


/*#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, sum=0;
	cin >> n;
	vector<char> num(n);
	for(int i=0; i<n; i++){
		cin >> num[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += num[i] - '0';
	}
	cout << sum; 
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	int c,a; // c는 케이스 a는 케이스 안의 숫자 게수 
	cin >> c;
	vector<float> d(c);
	for(int i=0; i<c; i++){
		cin >> a;
		int sum = 0,dk=0;//평균 저장할 값 dk는 평균을 넘는 수의 갯수 
		vector<int> b(a,0);//케이스 안에 숫자 넣을곳 
		for(int j=0;j<a;j++){
			cin >> b[j]; //케이스 에 있는수 저장 
			sum +=b[j];
		}
		sum /= a; // 평균 값 
		for(int j=0;j<a;j++){
			if(b[j]>sum){
				dk++; //평균 넘는 개수 카운트 
			}
		}
		d[i]=(float)dk / (float)a * 100; //비율 구하기 
	}
	for(int i=0; i<c;i++){
		cout <<  fixed; cout.precision(3); // 소수점 고정 
		cout << d[i]<<"%"<<endl; // 출력  
	}
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	int M, N;
	double a=0,num=0;
	cin >> N;
	for(int i=0; i<N; ++i){
		cin >> a;
		num+=a;
		M=M>a?M:a;
	}
	printf("%f\n", 100.0 * num / N / M);
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int A,B,V;
	cin>>A>>B>>V;
	cout<<(V-B -1)/(A-B) +1;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,K;
	cin>>N>>K;
	vector<int> v;
	for(int i=0; i<N; i++){
		v.push_back(i+1);
	}
	int eNum=0;
	cout<<"<";
	while(v.size()>1){
		eNum = (eNum+K-1)%v.size();
		cout << v[eNum] << ", ";
		v.erase(v.begin()+eNum);
	}
	cout<<v[0]<<">";
}*/

/*#include<bits/stdc++.h>
#define COW 11
using namespace std;
int main(){
	vector <int> cow(COW,99);
	int n = 0;
	int cnt=0;
	cin >> n;
	for(int i=0; i<n;i++){
		int t1,t2;
		cin>>t1>>t2;
		if(cow[t1]==99){
			cow[t1]=t2;
		}
		else if(cow[t1]==0&&t2==1){
			cnt++;
			cow[t1]=t2;
		}
		else if(cow[t1]==1&&t2==0){
			cnt++;
			cow[t1]=t2;
		}
	}
	cout<<cnt;
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v1;
	int n;
	cin >> n;
	vector<vector<int>> v(n,vector<int>(3));
	for(int i=0; i<n; i++){
		cin>>v[i][0]>>v[i][1];
		v[i][2]=1;
	}
	for(int i=0; i<n;i++){
		for(int j=0; j<n; j++){
			if(i==j) continue;
			if(v[i][0]<v[j][0]&&v[i][1]<v[j][1]) v[i][2]++;
		}
	}
	for(int i=0; i<n; i++){
		cout<<v[i][2]<<" ";
	}
}*/
/*#include<bits/stdc++.h>

using namespace std;

int main(){
   int M, N, cnt, sum=0,min = 100000000;
   cin>>M>>N;
   
   
   for(int i=M; i<=N; i++){
      cnt=0;
      for(int j=1; j<=i; j++){
         
         if(i%j==0){
            cnt++;
            
            }   
         }
         
            if(cnt==2){
               sum += i;
           
            if(i < min){
                min = i;
        	}   
    	}
    }
   if(sum == 0){
      printf("-1");
   }
   else{
      cout << sum <<'\n' <<min;
   }
      
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> m >> n;
	for(int i=m; i<=n; i++){
		bool flag=true;
		if(i==1)continue;
		for(int j=2; j<=sqrt(i); j++){
			if(i%j==0){
				flag=false;
				break;
			}
		}
		if(flag){
			cout << i<<"\n";
		}
	}
}*/

/*#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> m >> n;
	for(int i=m; i<=n; i++){
		bool flag=true;
		if(i==1)continue;
		for(int j=2; j<=sqrt(i); j++){
			if(i%j==0){
				flag=false;
				break;
			}
		}
		if(flag){
			cout << i<<"\n";
		}
	}
}*/

//v.push_back("1");

/*#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	int n;
	while(b!=0){
		n=a%b;
		a=b;
		b=n;
	}
	return a;
}

int lcm(int a, int b){
	return a*b / gcd(a, b);
}

int main(){
	int a, b;
	cin >> a >> b;
	cout <<gcd(a, b) <<"\n"<<lcm(a, b);
	return 0;
}*/
/*#include<bits/stdc++.h> //에라토스테네스의 체 

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	vector<int> v(a);
	vector<int> v2;
	for(int i=1; i<v.size();i++){
		v[i-1] = i+1;
	}
	for(int i=0; i<v.size();i++){
		int num=0;
		for(int j=1;j<=v[i]; j++){
			if(v[i]%j==0){
				num++;
			}
		}
		if(num==2){
			for(int j=0; j<v.size();j++){
				if(v[j]%v[i]==0){
					v2.push_back(v[j]);
				}
			}
		}
	}
	for(int i=0; i<v2.size();i++){
		cout<<v2[i]<<" ";
	}
}*/

/*#include<bits/stdc++.h> //소수 

using namespace std;

int main(){
	int M,N;
	int sum = 0 ;
	int mn=-1;
	int num=0;
	cin >> M >> N ;
	for(int i = M; i <= N; i++){
		for(int j = 1; j <= i ; j ++){
			if(i%j == 0){
				num++;
			}
		}
		if(num==2){
			if(mn == -1){
				mn=i;
			}
			sum+=i;
		}
		num=0;
	}
	if(mn==-1){
	cout <<-1<<"\n";
	}
	else cout << sum <<"\n"<<mn<<"\n";	
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0; i<n; i++){
		cout<<v[i]<<'\n';
	}
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0; i<n; i++){
		cout<<v[i]<<'\n';
	}
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
   string n;
   cin>>n;
   vector<int> v;
   for(int i=0;i<n.size();i++){
      v.push_back(n[i]-'0');
   }
   sort(v.begin(),v.end(),greater<int>());
   for(auto i:v)cout<<i;
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> v(n);
	
	for(int i=0; i<n; i++){
		cin>>v[i].first >> v[i].second;
	}
	
	sort(v.begin(),v.end());
	for(int i=0; i<v.size(); i++){
		cout << v[i].first << " " <<v[i].second <<'\n';
	}
}*/

/*#include<bits/stdc++.h> 

using namespace std;

bool compare(pair<int,int>a,pair<int,int>b){
   if(a.second==b.second) return a.first<b.first;
   return a.second<b.second;
}

int main(){
   int n;
   cin >> n;
   vector<pair<int,int>> v(n);
   
   for(int i=0; i<v.size(); i++){
      cin>>v[i].first>>v[i].second;
   }
   sort(v.begin(),v.end(),compare);
   for(auto i:v)cout<<i.first<<" "<<i.second<<'\n';
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	string a;
	stack<int> st;
	cin >> n;
	while(n--){
		cin >> a;
		
		if(a == "push"){
			int b;
			cin >> b;
			st.push(b);
		}
		else if(a == "pop"){
			cout << st.top <<'\n';
			st.pop();
		}
		else if(a == "size"){
			cout << st.size()<<'\n';
		}
		else if(a == "empty"){
			cout << st.empty()<<'\n';
		}
		else if(a == "top"){
			if(st.empty())cout << -1<<'\n';
			else cout<< st.top<<'\n';
		}
	}
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n,k;
	int cut = 0;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n; i ++){
		cin >> v[i];
	}
	cin >> k;
	for(int i=0; i<n;i++){
		if(v[i]==k){
			cut++;
		}
	}
	cout << cut;
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	vector<int> v(31);
	for(int i=1; i<=28; i++){
		int n;
		cin >> n;
		v[n]++;
	}
	for(int i=1;i<=30;i++){
		if(v[i]==0){
			cout << i<<'\n';
		}
	}
}*/

/*#include<bits/stdc++.h>

using namespace std;

void check(string a){
	stack<char> st;
	for (int i=0; i<a.size();i++){
		if(tmp[i]==')'){
		if(a[i]=='('){
			st.push('(');
		}
		else{
			if(st.top()=='(')st.pop();
			else{
				cout << "NO"<<'\n';
				return;
			}
		}
		}
	}
	if (st.empty()){
		cout << "YES" <<'\n';
	}else{
		cout << "NO"<<'\n';
	}
}

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string a;
		cin >> a;
		check(a);
	}
}
*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	queue<int> q;
	cin >> n;
	for(int i=1; i<=n; i++){
		q.push(i);
	}
	while (q.size()>1){
		q.pop();
		int tmp = q.front();
		q.push(tmp);
		q.pop();
	}
	cout << q.front();
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		for (int j=0; j<n;j++){
			cout<<"*";
		}
		cout<<'\n';
	}
}*/

/*#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
using namespace std;

int main(){
   unordered_map<string,int> mp;
   mp["정영훈"]=5; //mp[key]=value
   mp.insert(make_pair("박지성",3));
   mp.insert({"박찬호",2});
   cout<<mp.size()<<'\n';
   cout<<mp["정영훈"]<<'\n';

   for(auto i :mp){
      cout<<i.first<<" "<<i.second<<'\n';
   }
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	ser<int> st;
	st.insert(1);
	st.insert(10);
	st.insert(2);
	st.insert(3);
	st.insert(9);
	int n;
	cin >> n;
}*/

/*#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
using namespace std;

int main(){
   set<int> st;
   for(int i=0;i<10;i++){
      int tmp;
      cin>>tmp;
      st.insert(tmp%42);
   }
   cout<<st.size();
}*/

/*#include<bits/stdc++.h> 

using namespace std;

int main(){
	set<string> st;
	vector<string> v;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string t1,t2;
		cin >> t1 >> t2;
		if(t2 == "enter")st.insert(t1);
		else st.erase(t1);
	}
	for(auto i:st)v.push_back(i);
	reverse(v.begin(),v.end());
	for(string i:v) cout <<i<<'\n';
}*/

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	map<int,int> mp;
//	map<string, int> mp2;
//	set<string> st;
//	
//	st.insert("hello");
//	st.insert("hello1");
//	st.insert("hello2");
//	st.insert("hello3");
//	st.erase("Hello3");
//	
//	if(st.find("Hello3")==st.end()) cout<< "찾음"; 
//	
//	for(auto i : st)cout<<i<<'\n';
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n,m;
//	cin >>n>>m;
//	set<int> st;
//	for(int i=0;i<n;i++){
//		int tmp;
//		cin>>tmp;
//		st.insert(tmp);
//	}
//	for(int i=0;i<m;i++){
//		int tmp;
//		cin>>tmp;
//		st.erase(tmp);
//	}
//	cout<<st.size()<<'\n';
//	for(auto i:st)cout<<i<<" ";
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int a[6] = {500,100,50,10,5,1};
//	int n=0, num;
//	cin >> num;
//	num=1000-num;
//	while(!num == 0){
//		if(num>=a[0]){
//			num-=a[0];
//		}else if(num>=a[1]){
//			num-=a[1];
//		}else if(num>=a[2]){
//			num-=a[2];
//		}else if(num>=a[3]){
//			num-=a[3];
//		}else if(num>=a[4]){
//			num-=a[4];
//		}else if(num>=a[5]){
//			num-=a[5];
//		}
//		n++;
//	}
//	cout << n;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n,cut=0,i=0;
//	int a[6] = {500,100,50,10,5,1};
//	cin>> n;
//	n=1000-n;
//	while(n){
//		cut += n / a[i];
//		n%=a[i];
//		i++;
//	}
//	cout << cut;
//}

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,solv=0, i=0;
	cin >> n >> k;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}	
	reverse(v.begin(),v.end());
	while(k){
		solv += k/v[i];
		k%=v[i];
		i++;
	}
	cout<<solv;
}
