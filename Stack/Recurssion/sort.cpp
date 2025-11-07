#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &st,int x){
    if(st.empty()||st.top()>=x){
        st.push(x);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st,x);
    st.push(val);
}
void sort(stack<int> &st){
    if(st.empty()||st.size()==1){
        cout<<"Already sorted";
    }
    int x = st.top();
    st.pop();
    sort(st);
    insert(st,x);
}
int main(){
    stack<int> st;
    st.push(6);
    st.push(3);
    st.push(8);
    st.push(0);
    st.push(1);
    st.push(9);
    sort(st);


}