#include <iostream>
#include<vector>
using namespace std;

int main(){
  vector<string>v1;
  string jour,mois,anne,heure,minutes;
     cout<<"entrer la date :\n";
     cout<<"le jour : ";
     cin>>jour;
     cout<<"le mois : ";
     cin>>mois;
     cout<<"l annee : ";
     cin>>anne;
     cout<<"entrer l heure(hh,mm):\n ";
     cin>>heure>>minutes;
     v1.push_back(jour);
     v1.push_back(mois);
     v1.push_back(anne);
     v1.push_back(heure);
     v1.push_back(minutes);
cout<<"votre date sous forme JJMMAAAAHHNN : \n ";
vector<string>::iterator itr;
for(itr=v1.begin();itr!=v1.end();++itr){
cout<<*itr;
}
    return 0;
}