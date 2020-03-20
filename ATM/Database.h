#include "Account.h"
#include <vector>

class Database {

public:
	Database() {}

	void append(Account const& a) {
		accounts.push_back(a);
	}
	bool find(int);

private:
	std::vector<Account> accounts;

};


