<<<<<<< HEAD
/// @ref gtx_float_normalize

#include <limits>

namespace glm
{
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, float, Q> floatNormalize(vec<L, T, Q> const& v)
	{
		return vec<L, float, Q>(v) / static_cast<float>(std::numeric_limits<T>::max());
	}

}//namespace glm
=======
/// @ref gtx_float_normalize

#include <limits>

namespace glm
{
	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, float, Q> floatNormalize(vec<L, T, Q> const& v)
	{
		return vec<L, float, Q>(v) / static_cast<float>(std::numeric_limits<T>::max());
	}

}//namespace glm
>>>>>>> f8aea6f7d63dae77b8d83ba771701e3561278dc4
