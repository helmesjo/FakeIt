#ifndef MethodInvocation_h__
#define MethodInvocation_h__
namespace mock4cpp {

	template <typename... arglist>
	struct MethodInvocation:public Destructable
	{
		virtual ~MethodInvocation() = 0 {}

		virtual bool matchesActual(const arglist&... args) = 0;

		virtual bool matchesExpected(const arglist&... args) = 0;
	};
}
#endif // MethodInvocation_h__

