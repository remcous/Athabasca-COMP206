// Mirror.h
#ifndef MIRROR_H
#define MIRROR_H

class Mirror{
	Mirror* mp;
	bool init;
public:
	Mirror():init(0),mp(0){}
	Mirror(Mirror* imp):init(1),mp(imp){}
	bool test(){
		if(init)
			return mp->test();
		return init;
	}
	Mirror* point(){return mp;}
};
#endif	// MIRROR_H