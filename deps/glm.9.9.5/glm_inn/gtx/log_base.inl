<<<<<<< HEAD
/// @ref gtx_log_base

namespace glm
{
	template<typename genType>
	GLM_FUNC_QUALIFIER genType log(genType const& x, genType const& base)
	{
		return glm::log(x) / glm::log(base);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> log(vec<L, T, Q> const& x, vec<L, T, Q> const& base)
	{
		return glm::log(x) / glm::log(base);
	}
}//namespace glm
=======
/// @ref gtx_log_base

namespace glm
{
	template<typename genType>
	GLM_FUNC_QUALIFIER genType log(genType const& x, genType const& base)
	{
		return glm::log(x) / glm::log(base);
	}

	template<length_t L, typename T, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, T, Q> log(vec<L, T, Q> const& x, vec<L, T, Q> const& base)
	{
		return glm::log(x) / glm::log(base);
	}
}//namespace glm
>>>>>>> f8aea6f7d63dae77b8d83ba771701e3561278dc4
