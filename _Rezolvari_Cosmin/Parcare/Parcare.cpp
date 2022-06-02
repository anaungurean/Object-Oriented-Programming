#include "Parcare.h"
#include<iostream>
void Parcare::Create(int maxCapacity) {
	this->maxi = maxCapacity;
}
bool Parcare::Add(Masina* m1) {
	if (vec.size() < this->maxi)
	{
		this->vec.push_back(m1);
		return true;
	}
	return false;
}
bool Parcare::RemoveByName(string name) {
	int nr = 0; bool ok = false; int size_initial = this->vec.size();
	//vector<Masina*>::iterator a = this->vec.begin();
	//vector<Masina*>::iterator b = this->vec.begin();
	//while (a != this->vec.end())
	//{
	//	//std::cout << "masina:" << (*a)->GetName() << (*a)->GetColor() << "*\n";
	//	if ((*a)->GetName() == name)
	//	{
	//	//	cout << "Masina curenta:" << (*a)->GetName() << "nr = " << nr;
	//		vec.erase(this->vec.begin() + nr);
	//		a = vec.begin() + nr; ok = true;
	//	}
	//	else
	//	{
	//		nr++;
	//		++a;
	//	}
	//}
	this->vec.erase(remove_if(this->vec.begin(), this->vec.end(), [name](Masina* m) {
		return m->GetName() == name;
		}), this->vec.end());
		
	return size_initial!=this->vec.size();
}
int Parcare::GetCount() {
	return this->vec.size();
}
bool Parcare::IsFull() {
	if (this->vec.size() == this->maxi)
		return true;
	return false;
}
void Parcare::ShowAll() {
	cout << "SHOW-ALL:";
	for (auto a : this->vec)
	{
		cout << a->GetName() <<"("<< a->GetColor()<<")" << ",";
	}
	cout << "\n";
}
void Parcare::ShowByColor(string color) {
	cout << "SHOW-COLOR:"<<"("<<color<<"):";
	for (auto a : this->vec)
	{	if(a->GetColor()==color)
		cout << a->GetName()<<",";
	}
	cout << "\n";
}