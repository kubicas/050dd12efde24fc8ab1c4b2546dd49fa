#ifndef INTF_CPPMAKE__MAKEFILE_H
#define INTF_CPPMAKE__MAKEFILE_H

namespace cppmake {

class main_t
{
protected:
	main_t();
	virtual char const* filename() = 0;
	virtual void provides() = 0;
	virtual void requires() = 0;
	virtual void contains() = 0;
private:
	friend void run();
	main_t* m_next;
};

}; // namespace cppmake

#endif // INTF_CPPMAKE__MAKEFILE_H
