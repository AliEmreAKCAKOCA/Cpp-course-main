#pragma once
#define MINT_H

#include <ostream>
#include <istream>




class Mint
{
public:
	explicit Mint(int x = 0);

	friend std::ostream& operator<<(std::ostream&, const Mint&);
	friend  std::istream& operator>>(std::istream&, Mint);

private:
	int mx;

};

