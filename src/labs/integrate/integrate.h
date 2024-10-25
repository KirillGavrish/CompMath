//
// Created by Kirill Gavrish on 25.10.2024.
//

#ifndef INTEGRATE_H
#define INTEGRATE_H

#include <array>
#include <type_traits>
#include <cstdint>

using u32 = std::uint32_t;

template<typename A>
struct ArgumentGetter;

template<typename R, typename Arg>
struct ArgumentGetter<R(Arg)> {
    using Argument = Arg;
};

template<typename T>
using Dif = decltype(std::declval<T>() - std::declval<T>());

template<typename Callable, u32 N>
decltype(auto) integrate(
    const Callable& func,
    const typename ArgumentGetter<Callable>::Argument& start,
    const typename ArgumentGetter<Callable>::Argument& end
{

}

template<typename Callable, u32 N>
decltype(auto) integrate(
    const Callable& func,
    const typename ArgumentGetter<Callable>::Argument& start,
    const typename ArgumentGetter<Callable>::Argument& end,
    const Dif<typename ArgumentGetter<Callable>::Argument>& dx
    )
{

}

#endif //INTEGRATE_H
