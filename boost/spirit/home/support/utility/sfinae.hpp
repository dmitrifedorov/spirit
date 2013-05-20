/*=============================================================================
    Copyright (c) 2001-2013 Joel de Guzman
    Copyright (c) 2013 Agust�n Berg�

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(BOOST_SPIRIT_SFINAE_MAY_20_2013_0840AM)
#define BOOST_SPIRIT_SFINAE_MAY_20_2013_0840AM

#if defined(_MSC_VER)
#pragma once
#endif

namespace boost { namespace spirit
{
    template <typename Expr, typename T = void>
    struct disable_if_substitution_failure
    {
        typedef T type;
    };
    template <typename Expr, typename T>
    struct lazy_disable_if_substitution_failure
    {
        typedef typename T::type type;
    };
}}

#endif
