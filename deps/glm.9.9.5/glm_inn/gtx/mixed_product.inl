<<<<<<< HEAD
/// @ref gtx_mixed_product

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T mixedProduct
	(
		vec<3, T, Q> const& v1,
		vec<3, T, Q> const& v2,
		vec<3, T, Q> const& v3
	)
	{
		return dot(cross(v1, v2), v3);
	}
}//namespace glm
=======
/// @ref gtx_mixed_product

namespace glm
{
	template<typename T, qualifier Q>
	GLM_FUNC_QUALIFIER T mixedProduct
	(
		vec<3, T, Q> const& v1,
		vec<3, T, Q> const& v2,
		vec<3, T, Q> const& v3
	)
	{
		return dot(cross(v1, v2), v3);
	}
}//namespace glm
>>>>>>> f8aea6f7d63dae77b8d83ba771701e3561278dc4
