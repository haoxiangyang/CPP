#pragma once
class OneMale
{
public:
	OneMale();
	virtual ~OneMale();

	friend int GetAge(OneMale& person);

	friend class OneFemale;


private:

	int GetAget() { return age; }

	int age;
};

class OneFemale
{
public:
	OneFemale();
	~OneFemale();

	int GetMaleAge(OneMale man) {
		return man.GetAget();
	}

private:

};





