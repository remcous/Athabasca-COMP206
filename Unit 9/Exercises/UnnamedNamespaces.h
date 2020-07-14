// UnnamedNamespaces.h
#ifndef UNNAMEDNAMESPACES_H
#define UNNAMEDNAMESPACES_H
namespace droid{
	class Arm{};
	class Leg{};
	class Head{};
	class Robot{
		Arm arm[4];
		Leg leg[16];
		Head head[3];
		// ...
	} xanthan;
	int i, j, k;
}
#endif	// UNNAMEDNAMESPACES_H