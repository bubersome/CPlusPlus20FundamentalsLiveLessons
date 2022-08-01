cmake_minimum_required(VERSION 3.23)
project(CPlusPlus20FundamentalsLiveLessons)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_BUILD_TYPE Debug)

#include_directories(examples/lesson03/fig03_05/BigNumber/bin)
#include_directories(examples/lesson03/fig03_05/BigNumber/bin/BigNumber)
include_directories(examples/lesson03/fig03_05/BigNumber/bin/BigNumber/include)
#include_directories(examples/lesson03/fig03_05/BigNumber/src)
#include_directories(examples/lesson03/fig03_06/fmt)
#include_directories(examples/lesson04/fig04_12/fmt)
#include_directories(examples/lesson05)
#include_directories(examples/lesson06/fmt)
#include_directories(examples/lesson09/fig09_01-02)
#include_directories(examples/lesson09/fig09_03-04)
#include_directories(examples/lesson09/fig09_05-06)
#include_directories(examples/lesson09/fig09_07-09)
#include_directories(examples/lesson09/fig09_10-12)
#include_directories(examples/lesson09/fig09_13-15)
#include_directories(examples/lesson09/fig09_16-18)
#include_directories(examples/lesson09/fig09_19-21)
#include_directories(examples/lesson09/fig09_22)
#include_directories(examples/lesson09/fig09_23-27)
#include_directories(examples/lesson09/fig09_30-32)
#include_directories(examples/lesson09/fig09_33-35)
#include_directories(examples/lesson10/fig10_01-03)
#include_directories(examples/lesson10/fig10_04-06)
#include_directories(examples/lesson10/fig10_07)
#include_directories(examples/lesson10/fig10_08)
#include_directories(examples/lesson10/fig10_09)
#include_directories(examples/lesson10/fig10_10)
#include_directories(examples/lesson10/fig10_11-17)
#include_directories(examples/lesson10/fig10_19-25)
#include_directories(examples/lesson10/fig10_26-33)
#include_directories(examples/lesson10/fig10_34-40)
#include_directories(examples/lesson10/fig10_41-45)
#include_directories(examples/lesson11/fig11_03-05)
#include_directories(examples/lesson11/fig11_07)
#include_directories(examples/lesson11/fig11_08)
#include_directories(examples/lesson12/fig12_01-02)
#include_directories(examples/libraries/BigNumber/bin)
#include_directories(examples/libraries/BigNumber/bin/BigNumber)
#include_directories(examples/libraries/BigNumber/bin/BigNumber/include)
#include_directories(examples/libraries/BigNumber/src)
#include_directories(examples/libraries/cereal-1.3.0/include)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/archives)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/details)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/external)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/error)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/msinttypes)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/external/rapidxml)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/types)
#include_directories(examples/libraries/cereal-1.3.0/include/cereal/types/concepts)
#include_directories(examples/libraries/cereal-1.3.0/sandbox/sandbox_shared_lib)
#include_directories(examples/libraries/cereal-1.3.0/unittests)
#include_directories(examples/libraries/cereal-1.3.0/unittests/boost)
#include_directories(examples/libraries/cereal-1.3.0/unittests/cpp17)
#include_directories(examples/libraries/fmt/include)
#include_directories(examples/libraries/fmt/include/fmt)
#include_directories(examples/libraries/fmt/test)
#include_directories(examples/libraries/fmt/test/fuzzing)
#include_directories(examples/libraries/fmt/test/gtest/gmock)
#include_directories(examples/libraries/fmt/test/gtest/gtest)
#include_directories(examples/libraries/rapidcsv/src)
#include_directories(examples/libraries/rapidcsv/tests)

add_executable(CPlusPlus20FundamentalsLiveLessons
#        examples/lesson01/GuessNumber.cpp
#        examples/lesson02/fig02_01.cpp
#        examples/lesson02/fig02_02.cpp
#        examples/lesson02/fig02_03.cpp
#        examples/lesson02/fig02_04.cpp
#        examples/lesson02/fig02_05.cpp
#        examples/lesson02/fig02_06.cpp
#        examples/lesson03/fig03_05/BigNumber/bin/BigNumber/include/bignumber.h
        examples/lesson03/fig03_05/BigNumber/src/bignumber.cpp
#        examples/lesson03/fig03_05/BigNumber/src/bignumber.h
        examples/lesson03/fig03_05/BigNumber/main.cpp
        examples/lesson03/fig03_05/fig03_05.cpp
#        examples/lesson03/fig03_06/fmt/core.h
#        examples/lesson03/fig03_06/fmt/format-inl.h
#        examples/lesson03/fig03_06/fmt/format.h
#        examples/lesson03/fig03_06/fig03_06.cpp
#        examples/lesson03/fig03_06/format.cc
#        examples/lesson03/fig03_01.cpp
#        examples/lesson03/fig03_02.cpp
#        examples/lesson03/fig03_03.cpp
#        examples/lesson03/fig03_04.cpp
#        examples/lesson04/fig04_12/fmt/core.h
#        examples/lesson04/fig04_12/fmt/format-inl.h
#        examples/lesson04/fig04_12/fmt/format.h
#        examples/lesson04/fig04_12/fig04_12.cpp
#        examples/lesson04/fig04_12/format.cc
#        examples/lesson04/fig04_01.cpp
#        examples/lesson04/fig04_02.cpp
#        examples/lesson04/fig04_03.cpp
#        examples/lesson04/fig04_04.cpp
#        examples/lesson04/fig04_05.cpp
#        examples/lesson04/fig04_06.cpp
#        examples/lesson04/fig04_07.cpp
#        examples/lesson04/fig04_07_with_error.cpp
#        examples/lesson04/fig04_08.cpp
#        examples/lesson04/fig04_09.cpp
#        examples/lesson04/fig04_10.cpp
#        examples/lesson04/fig04_11.cpp
#        examples/lesson05/cipher.h
#        examples/lesson05/fig05_01.cpp
#        examples/lesson05/fig05_02.cpp
#        examples/lesson05/fig05_03.cpp
#        examples/lesson05/fig05_04.cpp
#        examples/lesson05/fig05_05.cpp
#        examples/lesson05/fig05_06.cpp
#        examples/lesson05/fig05_07.cpp
#        examples/lesson05/fig05_08.cpp
#        examples/lesson05/fig05_09.cpp
#        examples/lesson05/fig05_10.cpp
#        examples/lesson05/fig05_11.cpp
#        examples/lesson05/fig05_12.cpp
#        examples/lesson05/fig05_13.cpp
#        examples/lesson05/fig05_15.cpp
#        examples/lesson05/fig05_16.cpp
#        examples/lesson05/fig05_17.cpp
#        examples/lesson05/fig05_18.cpp
#        examples/lesson05/fig05_19.cpp
#        examples/lesson05/fig05_20.cpp
#        examples/lesson05/maximum.h
#        examples/lesson06/fmt/core.h
#        examples/lesson06/fmt/format-inl.h
#        examples/lesson06/fmt/format.h
#        examples/lesson06/fig06_01.cpp
#        examples/lesson06/fig06_02.cpp
#        examples/lesson06/fig06_03.cpp
#        examples/lesson06/fig06_04.cpp
#        examples/lesson06/fig06_05.cpp
#        examples/lesson06/fig06_06.cpp
#        examples/lesson06/fig06_07.cpp
#        examples/lesson06/fig06_08.cpp
#        examples/lesson06/fig06_09.cpp
#        examples/lesson06/fig06_10.cpp
#        examples/lesson06/fig06_11.cpp
#        examples/lesson06/fig06_12.cpp
#        examples/lesson06/fig06_13.cpp
#        examples/lesson06/fig06_14.cpp
#        examples/lesson06/format.cc
#        examples/lesson07/fig07_01.cpp
#        examples/lesson07/fig07_02.cpp
#        examples/lesson07/fig07_03.cpp
#        examples/lesson07/fig07_06.cpp
#        examples/lesson07/fig07_07.cpp
#        examples/lesson07/fig07_08.cpp
#        examples/lesson07/fig07_09.cpp
#        examples/lesson07/fig07_10.cpp
#        examples/lesson07/fig07_11.cpp
#        examples/lesson07/fig07_12.cpp
#        examples/lesson07/fig07_13.cpp
#        examples/lesson07/fig07_14.cpp
#        examples/lesson08/fig08_01.cpp
#        examples/lesson08/fig08_02.cpp
#        examples/lesson08/fig08_03.cpp
#        examples/lesson08/fig08_04.cpp
#        examples/lesson08/fig08_05.cpp
#        examples/lesson08/fig08_06.cpp
#        examples/lesson08/fig08_07.cpp
#        examples/lesson08/fig08_08.cpp
#        examples/lesson08/fig08_09.cpp
#        examples/lesson08/fig08_10.cpp
#        examples/lesson08/fig08_11.cpp
#        examples/lesson08/fig08_12.cpp
#        examples/lesson08/fig08_13.cpp
#        examples/lesson08/fig08_14.cpp
#        examples/lesson08/fig08_15.cpp
#        examples/lesson08/fig08_16.cpp
#        examples/lesson08/fig08_17.cpp
#        examples/lesson08/fig08_18.cpp
#        examples/lesson08/format.cc
#        examples/lesson09/fig09_01-02/Account.h
#        examples/lesson09/fig09_01-02/AccountTest.cpp
#        examples/lesson09/fig09_03-04/Account.h
#        examples/lesson09/fig09_03-04/AccountTest.cpp
#        examples/lesson09/fig09_05-06/Account.h
#        examples/lesson09/fig09_05-06/AccountTest.cpp
#        examples/lesson09/fig09_07-09/fig09_09.cpp
#        examples/lesson09/fig09_07-09/Time.cpp
#        examples/lesson09/fig09_07-09/Time.h
#        examples/lesson09/fig09_10-12/fig09_12.cpp
#        examples/lesson09/fig09_10-12/Time.cpp
#        examples/lesson09/fig09_10-12/Time.h
#        examples/lesson09/fig09_13-15/CreateAndDestroy.cpp
#        examples/lesson09/fig09_13-15/CreateAndDestroy.h
#        examples/lesson09/fig09_13-15/fig09_15.cpp
#        examples/lesson09/fig09_16-18/fig09_18.cpp
#        examples/lesson09/fig09_16-18/Time.cpp
#        examples/lesson09/fig09_16-18/Time.h
#        examples/lesson09/fig09_19-21/Date.cpp
#        examples/lesson09/fig09_19-21/Date.h
#        examples/lesson09/fig09_19-21/fig09_21.cpp
#        examples/lesson09/fig09_22/fig09_22.cpp
#        examples/lesson09/fig09_22/Time.cpp
#        examples/lesson09/fig09_22/Time.h
#        examples/lesson09/fig09_23-27/Date.cpp
#        examples/lesson09/fig09_23-27/Date.h
#        examples/lesson09/fig09_23-27/Employee.cpp
#        examples/lesson09/fig09_23-27/Employee.h
#        examples/lesson09/fig09_23-27/fig09_27.cpp
#        examples/lesson09/fig09_28/fig09_28.cpp
#        examples/lesson09/fig09_29/fig09_29.cpp
#        examples/lesson09/fig09_30-32/fig09_32.cpp
#        examples/lesson09/fig09_30-32/Time.cpp
#        examples/lesson09/fig09_30-32/Time.h
#        examples/lesson09/fig09_33-35/Employee.cpp
#        examples/lesson09/fig09_33-35/Employee.h
#        examples/lesson09/fig09_33-35/fig09_35.cpp
#        examples/lesson09/fig09_36/fig09_36.cpp
#        examples/lesson09/fig09_37/fig09_37.cpp
#        examples/lesson10/fig10_01-03/fig10_03.cpp
#        examples/lesson10/fig10_01-03/SalariedEmployee.cpp
#        examples/lesson10/fig10_01-03/SalariedEmployee.h
#        examples/lesson10/fig10_04-06/fig10_06.cpp
#        examples/lesson10/fig10_04-06/SalariedCommissionEmployee.cpp
#        examples/lesson10/fig10_04-06/SalariedCommissionEmployee.h
#        examples/lesson10/fig10_04-06/SalariedEmployee.cpp
#        examples/lesson10/fig10_04-06/SalariedEmployee.h
#        examples/lesson10/fig10_07/fig10_07.cpp
#        examples/lesson10/fig10_07/SalariedCommissionEmployee.cpp
#        examples/lesson10/fig10_07/SalariedCommissionEmployee.h
#        examples/lesson10/fig10_07/SalariedEmployee.cpp
#        examples/lesson10/fig10_07/SalariedEmployee.h
#        examples/lesson10/fig10_08/fig10_08.cpp
#        examples/lesson10/fig10_08/SalariedCommissionEmployee.cpp
#        examples/lesson10/fig10_08/SalariedCommissionEmployee.h
#        examples/lesson10/fig10_08/SalariedEmployee.cpp
#        examples/lesson10/fig10_08/SalariedEmployee.h
#        examples/lesson10/fig10_09/fig10_09.cpp
#        examples/lesson10/fig10_09/SalariedCommissionEmployee.cpp
#        examples/lesson10/fig10_09/SalariedCommissionEmployee.h
#        examples/lesson10/fig10_09/SalariedEmployee.cpp
#        examples/lesson10/fig10_09/SalariedEmployee.h
#        examples/lesson10/fig10_10/fig10_10.cpp
#        examples/lesson10/fig10_10/SalariedCommissionEmployee.cpp
#        examples/lesson10/fig10_10/SalariedCommissionEmployee.h
#        examples/lesson10/fig10_10/SalariedEmployee.cpp
#        examples/lesson10/fig10_10/SalariedEmployee.h
#        examples/lesson10/fig10_11-17/CommissionEmployee.cpp
#        examples/lesson10/fig10_11-17/CommissionEmployee.h
#        examples/lesson10/fig10_11-17/Employee.cpp
#        examples/lesson10/fig10_11-17/Employee.h
#        examples/lesson10/fig10_11-17/fig10_17.cpp
#        examples/lesson10/fig10_11-17/SalariedEmployee.cpp
#        examples/lesson10/fig10_11-17/SalariedEmployee.h
#        examples/lesson10/fig10_19-25/CommissionEmployee.cpp
#        examples/lesson10/fig10_19-25/CommissionEmployee.h
#        examples/lesson10/fig10_19-25/Employee.cpp
#        examples/lesson10/fig10_19-25/Employee.h
#        examples/lesson10/fig10_19-25/fig10_25.cpp
#        examples/lesson10/fig10_19-25/SalariedEmployee.cpp
#        examples/lesson10/fig10_19-25/SalariedEmployee.h
#        examples/lesson10/fig10_26-33/Commission.cpp
#        examples/lesson10/fig10_26-33/Commission.h
#        examples/lesson10/fig10_26-33/CompensationModel.h
#        examples/lesson10/fig10_26-33/Employee.cpp
#        examples/lesson10/fig10_26-33/Employee.h
#        examples/lesson10/fig10_26-33/fig10_33.cpp
#        examples/lesson10/fig10_26-33/Salaried.cpp
#        examples/lesson10/fig10_26-33/Salaried.h
#        examples/lesson10/fig10_34-40/Commission.cpp
#        examples/lesson10/fig10_34-40/Commission.h
#        examples/lesson10/fig10_34-40/Employee.cpp
#        examples/lesson10/fig10_34-40/Employee.h
#        examples/lesson10/fig10_34-40/fig10_40.cpp
#        examples/lesson10/fig10_34-40/Salaried.cpp
#        examples/lesson10/fig10_34-40/Salaried.h
#        examples/lesson10/fig10_41-45/Base1.h
#        examples/lesson10/fig10_41-45/Base2.h
#        examples/lesson10/fig10_41-45/Derived.cpp
#        examples/lesson10/fig10_41-45/Derived.h
#        examples/lesson10/fig10_41-45/fig10_45.cpp
#        examples/lesson10/fig10_46/fig10_46.cpp
#        examples/lesson10/fig10_47/fig10_47.cpp
#        examples/lesson11/fig11_01/fig11_01.cpp
#        examples/lesson11/fig11_02/fig11_02.cpp
#        examples/lesson11/fig11_03-05/fig11_03.cpp
#        examples/lesson11/fig11_03-05/MyArray.cpp
#        examples/lesson11/fig11_03-05/MyArray.h
#        examples/lesson11/fig11_06/fig11_06.cpp
#        examples/lesson11/fig11_07/fig11_07.cpp
#        examples/lesson11/fig11_07/MyArray.cpp
#        examples/lesson11/fig11_07/MyArray.h
#        examples/lesson11/fig11_08/fig11_08.cpp
#        examples/lesson11/fig11_08/MyArray.cpp
#        examples/lesson11/fig11_08/MyArray.h
#        examples/lesson12/fig12_01-02/DivideByZeroException.h
#        examples/lesson12/fig12_01-02/fig12_02.cpp
#        examples/lesson12/fig12_03/fig12_03.cpp
#        examples/lesson12/fig12_04/fig12_04.cpp
#        examples/lesson12/fig12_04/fig12_04modified.cpp
#        examples/lesson12/fig12_05/fig12_05.cpp
#        examples/lesson12/fig12_06/fig12_06.cpp
#        examples/lesson12/fig12_07/fig12_07.cpp
#        examples/lesson12/fig12_08/fig12_08.cpp
#        examples/lesson12/fig12_09/fig12_09.cpp
#        examples/lesson13/fig13_01.cpp
#        examples/lesson13/fig13_02.cpp
#        examples/lesson13/fig13_03.cpp
#        examples/lesson13/fig13_04.cpp
#        examples/lesson13/fig13_05.cpp
#        examples/lesson13/fig13_06.cpp
#        examples/lesson13/fig13_07.cpp
#        examples/lesson13/fig13_08.cpp
#        examples/lesson13/fig13_09.cpp
#        examples/lesson13/fig13_10.cpp
#        examples/lesson13/fig13_11.cpp
#        examples/lesson13/fig13_12.cpp
#        examples/libraries/BigNumber/bin/BigNumber/include/bignumber.h
#        examples/libraries/BigNumber/src/bignumber.cpp
#        examples/libraries/BigNumber/src/bignumber.h
#        examples/libraries/BigNumber/main.cpp
#        examples/libraries/cereal-1.3.0/include/cereal/archives/adapters.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/archives/binary.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/archives/json.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/archives/portable_binary.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/archives/xml.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/details/helpers.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/details/polymorphic_impl.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/details/polymorphic_impl_fwd.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/details/static_object.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/details/traits.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/details/util.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/error/en.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/error/error.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/biginteger.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/diyfp.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/dtoa.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/ieee754.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/itoa.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/meta.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/pow10.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/regex.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/stack.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/strfunc.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/strtod.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/internal/swap.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/msinttypes/inttypes.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/msinttypes/stdint.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/allocators.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/cursorstreamwrapper.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/document.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/encodedstream.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/encodings.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/filereadstream.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/filewritestream.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/fwd.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/istreamwrapper.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/memorybuffer.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/memorystream.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/ostreamwrapper.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/pointer.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/prettywriter.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/rapidjson.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/reader.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/schema.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/stream.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/stringbuffer.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidjson/writer.h
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidxml/rapidxml.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidxml/rapidxml_iterators.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidxml/rapidxml_print.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/external/rapidxml/rapidxml_utils.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/external/base64.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/concepts/pair_associative_container.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/array.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/atomic.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/base_class.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/bitset.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/boost_variant.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/chrono.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/common.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/complex.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/deque.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/forward_list.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/functional.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/list.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/map.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/memory.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/optional.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/polymorphic.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/queue.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/set.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/stack.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/string.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/tuple.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/unordered_map.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/unordered_set.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/utility.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/valarray.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/variant.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/types/vector.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/access.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/cereal.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/macros.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/specialize.hpp
#        examples/libraries/cereal-1.3.0/include/cereal/version.hpp
#        examples/libraries/cereal-1.3.0/sandbox/sandbox_shared_lib/base.cpp
#        examples/libraries/cereal-1.3.0/sandbox/sandbox_shared_lib/base.hpp
#        examples/libraries/cereal-1.3.0/sandbox/sandbox_shared_lib/derived.cpp
#        examples/libraries/cereal-1.3.0/sandbox/sandbox_shared_lib/derived.hpp
#        examples/libraries/cereal-1.3.0/sandbox/performance.cpp
#        examples/libraries/cereal-1.3.0/sandbox/sandbox.cpp
#        examples/libraries/cereal-1.3.0/sandbox/sandbox_json.cpp
#        examples/libraries/cereal-1.3.0/sandbox/sandbox_rtti.cpp
#        examples/libraries/cereal-1.3.0/sandbox/sandbox_vs.cpp
#        examples/libraries/cereal-1.3.0/unittests/boost/boost_variant.cpp
#        examples/libraries/cereal-1.3.0/unittests/boost/boost_variant.hpp
#        examples/libraries/cereal-1.3.0/unittests/cpp17/optional.cpp
#        examples/libraries/cereal-1.3.0/unittests/cpp17/optional.hpp
#        examples/libraries/cereal-1.3.0/unittests/cpp17/variant.cpp
#        examples/libraries/cereal-1.3.0/unittests/cpp17/variant.hpp
#        examples/libraries/cereal-1.3.0/unittests/array.cpp
#        examples/libraries/cereal-1.3.0/unittests/array.hpp
#        examples/libraries/cereal-1.3.0/unittests/atomic.cpp
#        examples/libraries/cereal-1.3.0/unittests/atomic.hpp
#        examples/libraries/cereal-1.3.0/unittests/basic_string.cpp
#        examples/libraries/cereal-1.3.0/unittests/basic_string.hpp
#        examples/libraries/cereal-1.3.0/unittests/bitset.cpp
#        examples/libraries/cereal-1.3.0/unittests/bitset.hpp
#        examples/libraries/cereal-1.3.0/unittests/chrono.cpp
#        examples/libraries/cereal-1.3.0/unittests/chrono.hpp
#        examples/libraries/cereal-1.3.0/unittests/common.hpp
#        examples/libraries/cereal-1.3.0/unittests/complex.cpp
#        examples/libraries/cereal-1.3.0/unittests/complex.hpp
#        examples/libraries/cereal-1.3.0/unittests/defer.cpp
#        examples/libraries/cereal-1.3.0/unittests/defer.hpp
#        examples/libraries/cereal-1.3.0/unittests/deque.cpp
#        examples/libraries/cereal-1.3.0/unittests/deque.hpp
#        examples/libraries/cereal-1.3.0/unittests/doctest.h
#        examples/libraries/cereal-1.3.0/unittests/forward_list.cpp
#        examples/libraries/cereal-1.3.0/unittests/forward_list.hpp
#        examples/libraries/cereal-1.3.0/unittests/list.cpp
#        examples/libraries/cereal-1.3.0/unittests/list.hpp
#        examples/libraries/cereal-1.3.0/unittests/load_construct.cpp
#        examples/libraries/cereal-1.3.0/unittests/load_construct.hpp
#        examples/libraries/cereal-1.3.0/unittests/map.cpp
#        examples/libraries/cereal-1.3.0/unittests/map.hpp
#        examples/libraries/cereal-1.3.0/unittests/memory.cpp
#        examples/libraries/cereal-1.3.0/unittests/memory.hpp
#        examples/libraries/cereal-1.3.0/unittests/memory_cycles.cpp
#        examples/libraries/cereal-1.3.0/unittests/memory_cycles.hpp
#        examples/libraries/cereal-1.3.0/unittests/multimap.cpp
#        examples/libraries/cereal-1.3.0/unittests/multimap.hpp
#        examples/libraries/cereal-1.3.0/unittests/multiset.cpp
#        examples/libraries/cereal-1.3.0/unittests/multiset.hpp
#        examples/libraries/cereal-1.3.0/unittests/pair.cpp
#        examples/libraries/cereal-1.3.0/unittests/pair.hpp
#        examples/libraries/cereal-1.3.0/unittests/pod.cpp
#        examples/libraries/cereal-1.3.0/unittests/pod.hpp
#        examples/libraries/cereal-1.3.0/unittests/polymorphic.cpp
#        examples/libraries/cereal-1.3.0/unittests/polymorphic.hpp
#        examples/libraries/cereal-1.3.0/unittests/portability_test.cpp
#        examples/libraries/cereal-1.3.0/unittests/portable_binary_archive.cpp
#        examples/libraries/cereal-1.3.0/unittests/portable_binary_archive.hpp
#        examples/libraries/cereal-1.3.0/unittests/priority_queue.cpp
#        examples/libraries/cereal-1.3.0/unittests/priority_queue.hpp
#        examples/libraries/cereal-1.3.0/unittests/queue.cpp
#        examples/libraries/cereal-1.3.0/unittests/queue.hpp
#        examples/libraries/cereal-1.3.0/unittests/set.cpp
#        examples/libraries/cereal-1.3.0/unittests/set.hpp
#        examples/libraries/cereal-1.3.0/unittests/stack.cpp
#        examples/libraries/cereal-1.3.0/unittests/stack.hpp
#        examples/libraries/cereal-1.3.0/unittests/structs.cpp
#        examples/libraries/cereal-1.3.0/unittests/structs.hpp
#        examples/libraries/cereal-1.3.0/unittests/structs_minimal.cpp
#        examples/libraries/cereal-1.3.0/unittests/structs_minimal.hpp
#        examples/libraries/cereal-1.3.0/unittests/structs_specialized.cpp
#        examples/libraries/cereal-1.3.0/unittests/structs_specialized.hpp
#        examples/libraries/cereal-1.3.0/unittests/tuple.cpp
#        examples/libraries/cereal-1.3.0/unittests/tuple.hpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_loads.cpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_loads.hpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_map.cpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_map.hpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_multimap.cpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_multimap.hpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_multiset.cpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_multiset.hpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_set.cpp
#        examples/libraries/cereal-1.3.0/unittests/unordered_set.hpp
#        examples/libraries/cereal-1.3.0/unittests/user_data_adapters.cpp
#        examples/libraries/cereal-1.3.0/unittests/user_data_adapters.hpp
#        examples/libraries/cereal-1.3.0/unittests/valarray.cpp
#        examples/libraries/cereal-1.3.0/unittests/valarray.hpp
#        examples/libraries/cereal-1.3.0/unittests/vector.cpp
#        examples/libraries/cereal-1.3.0/unittests/vector.hpp
#        examples/libraries/cereal-1.3.0/unittests/versioning.cpp
#        examples/libraries/cereal-1.3.0/unittests/versioning.hpp
#        examples/libraries/fmt/include/fmt/args.h
#        examples/libraries/fmt/include/fmt/chrono.h
#        examples/libraries/fmt/include/fmt/color.h
#        examples/libraries/fmt/include/fmt/compile.h
#        examples/libraries/fmt/include/fmt/core.h
#        examples/libraries/fmt/include/fmt/format-inl.h
#        examples/libraries/fmt/include/fmt/format.h
#        examples/libraries/fmt/include/fmt/locale.h
#        examples/libraries/fmt/include/fmt/os.h
#        examples/libraries/fmt/include/fmt/ostream.h
#        examples/libraries/fmt/include/fmt/printf.h
#        examples/libraries/fmt/include/fmt/ranges.h
#        examples/libraries/fmt/include/fmt/xchar.h
#        examples/libraries/fmt/src/fmt.cc
#        examples/libraries/fmt/src/format.cc
#        examples/libraries/fmt/src/os.cc
#        examples/libraries/fmt/test/add-subdirectory-test/main.cc
#        examples/libraries/fmt/test/cuda-test/cpp14.cc
#        examples/libraries/fmt/test/cuda-test/cuda-cpp14.cu
#        examples/libraries/fmt/test/find-package-test/main.cc
#        examples/libraries/fmt/test/fuzzing/chrono-duration.cc
#        examples/libraries/fmt/test/fuzzing/float.cc
#        examples/libraries/fmt/test/fuzzing/fuzzer-common.h
#        examples/libraries/fmt/test/fuzzing/main.cc
#        examples/libraries/fmt/test/fuzzing/named-arg.cc
#        examples/libraries/fmt/test/fuzzing/one-arg.cc
#        examples/libraries/fmt/test/fuzzing/two-args.cc
#        examples/libraries/fmt/test/gtest/gmock/gmock.h
#        examples/libraries/fmt/test/gtest/gtest/gtest-spi.h
#        examples/libraries/fmt/test/gtest/gtest/gtest.h
#        examples/libraries/fmt/test/gtest/gmock-gtest-all.cc
#        examples/libraries/fmt/test/static-export-test/library.cc
#        examples/libraries/fmt/test/static-export-test/main.cc
#        examples/libraries/fmt/test/args-test.cc
#        examples/libraries/fmt/test/assert-test.cc
#        examples/libraries/fmt/test/chrono-test.cc
#        examples/libraries/fmt/test/color-test.cc
#        examples/libraries/fmt/test/compile-test.cc
#        examples/libraries/fmt/test/core-test.cc
#        examples/libraries/fmt/test/enforce-checks-test.cc
#        examples/libraries/fmt/test/format-impl-test.cc
#        examples/libraries/fmt/test/format-test.cc
#        examples/libraries/fmt/test/gtest-extra-test.cc
#        examples/libraries/fmt/test/gtest-extra.cc
#        examples/libraries/fmt/test/gtest-extra.h
#        examples/libraries/fmt/test/header-only-test.cc
#        examples/libraries/fmt/test/mock-allocator.h
#        examples/libraries/fmt/test/module-test.cc
#        examples/libraries/fmt/test/os-test.cc
#        examples/libraries/fmt/test/ostream-test.cc
#        examples/libraries/fmt/test/posix-mock-test.cc
#        examples/libraries/fmt/test/posix-mock.h
#        examples/libraries/fmt/test/printf-test.cc
#        examples/libraries/fmt/test/ranges-test.cc
#        examples/libraries/fmt/test/scan-test.cc
#        examples/libraries/fmt/test/scan.h
#        examples/libraries/fmt/test/std-format-test.cc
#        examples/libraries/fmt/test/test-assert.h
#        examples/libraries/fmt/test/test-main.cc
#        examples/libraries/fmt/test/unicode-test.cc
#        examples/libraries/fmt/test/util.cc
#        examples/libraries/fmt/test/util.h
#        examples/libraries/fmt/test/xchar-test.cc
#        examples/libraries/GSL/tests/algorithm_tests.cpp
#        examples/libraries/GSL/tests/assertion_tests.cpp
#        examples/libraries/GSL/tests/at_tests.cpp
#        examples/libraries/GSL/tests/bounds_tests.cpp
#        examples/libraries/GSL/tests/byte_tests.cpp
#        examples/libraries/GSL/tests/multi_span_tests.cpp
#        examples/libraries/GSL/tests/no_exception_ensure_tests.cpp
#        examples/libraries/GSL/tests/notnull_tests.cpp
#        examples/libraries/GSL/tests/owner_tests.cpp
#        examples/libraries/GSL/tests/span_compatibility_tests.cpp
#        examples/libraries/GSL/tests/span_ext_tests.cpp
#        examples/libraries/GSL/tests/span_tests.cpp
#        examples/libraries/GSL/tests/strict_notnull_tests.cpp
#        examples/libraries/GSL/tests/strided_span_tests.cpp
#        examples/libraries/GSL/tests/string_span_tests.cpp
#        examples/libraries/GSL/tests/utils_tests.cpp
#        examples/libraries/rapidcsv/examples/ex001.cpp
#        examples/libraries/rapidcsv/examples/ex002.cpp
#        examples/libraries/rapidcsv/examples/ex003.cpp
#        examples/libraries/rapidcsv/examples/ex004.cpp
#        examples/libraries/rapidcsv/examples/ex005.cpp
#        examples/libraries/rapidcsv/examples/ex006.cpp
#        examples/libraries/rapidcsv/examples/ex007.cpp
#        examples/libraries/rapidcsv/examples/ex008.cpp
#        examples/libraries/rapidcsv/examples/ex009.cpp
#        examples/libraries/rapidcsv/src/rapidcsv.h
#        examples/libraries/rapidcsv/tests/perftest.h
#        examples/libraries/rapidcsv/tests/ptest001.cpp
#        examples/libraries/rapidcsv/tests/ptest002.cpp
#        examples/libraries/rapidcsv/tests/test001.cpp
#        examples/libraries/rapidcsv/tests/test002.cpp
#        examples/libraries/rapidcsv/tests/test003.cpp
#        examples/libraries/rapidcsv/tests/test004.cpp
#        examples/libraries/rapidcsv/tests/test005.cpp
#        examples/libraries/rapidcsv/tests/test006.cpp
#        examples/libraries/rapidcsv/tests/test007.cpp
#        examples/libraries/rapidcsv/tests/test008.cpp
#        examples/libraries/rapidcsv/tests/test009.cpp
#        examples/libraries/rapidcsv/tests/test010.cpp
#        examples/libraries/rapidcsv/tests/test011.cpp
#        examples/libraries/rapidcsv/tests/test012.cpp
#        examples/libraries/rapidcsv/tests/test013.cpp
#        examples/libraries/rapidcsv/tests/test014.cpp
#        examples/libraries/rapidcsv/tests/test015.cpp
#        examples/libraries/rapidcsv/tests/test016.cpp
#        examples/libraries/rapidcsv/tests/test017.cpp
#        examples/libraries/rapidcsv/tests/test018.cpp
#        examples/libraries/rapidcsv/tests/test019.cpp
#        examples/libraries/rapidcsv/tests/test020.cpp
#        examples/libraries/rapidcsv/tests/test021.cpp
#        examples/libraries/rapidcsv/tests/test022.cpp
#        examples/libraries/rapidcsv/tests/test023.cpp
#        examples/libraries/rapidcsv/tests/test024.cpp
#        examples/libraries/rapidcsv/tests/test025.cpp
#        examples/libraries/rapidcsv/tests/test026.cpp
#        examples/libraries/rapidcsv/tests/test027.cpp
#        examples/libraries/rapidcsv/tests/test028.cpp
#        examples/libraries/rapidcsv/tests/test029.cpp
#        examples/libraries/rapidcsv/tests/test030.cpp
#        examples/libraries/rapidcsv/tests/test031.cpp
#        examples/libraries/rapidcsv/tests/test032.cpp
#        examples/libraries/rapidcsv/tests/test033.cpp
#        examples/libraries/rapidcsv/tests/test034.cpp
#        examples/libraries/rapidcsv/tests/test035.cpp
#        examples/libraries/rapidcsv/tests/test036.cpp
#        examples/libraries/rapidcsv/tests/test037.cpp
#        examples/libraries/rapidcsv/tests/test038.cpp
#        examples/libraries/rapidcsv/tests/test039.cpp
#        examples/libraries/rapidcsv/tests/test040.cpp
#        examples/libraries/rapidcsv/tests/test040b.cpp
#        examples/libraries/rapidcsv/tests/test041.cpp
#        examples/libraries/rapidcsv/tests/test042.cpp
#        examples/libraries/rapidcsv/tests/test043.cpp
#        examples/libraries/rapidcsv/tests/test044.cpp
#        examples/libraries/rapidcsv/tests/test045.cpp
#        examples/libraries/rapidcsv/tests/test046.cpp
#        examples/libraries/rapidcsv/tests/test047.cpp
#        examples/libraries/rapidcsv/tests/test048.cpp
#        examples/libraries/rapidcsv/tests/test049.cpp
#        examples/libraries/rapidcsv/tests/test050.cpp
#        examples/libraries/rapidcsv/tests/test051.cpp
#        examples/libraries/rapidcsv/tests/test052.cpp
#        examples/libraries/rapidcsv/tests/test053.cpp
#        examples/libraries/rapidcsv/tests/test054.cpp
#        examples/libraries/rapidcsv/tests/test055.cpp
#        examples/libraries/rapidcsv/tests/test056.cpp
#        examples/libraries/rapidcsv/tests/test057.cpp
#        examples/libraries/rapidcsv/tests/test058.cpp
#        examples/libraries/rapidcsv/tests/test059.cpp
#        examples/libraries/rapidcsv/tests/test060.cpp
#        examples/libraries/rapidcsv/tests/test061.cpp
#        examples/libraries/rapidcsv/tests/test062.cpp
#        examples/libraries/rapidcsv/tests/test063.cpp
#        examples/libraries/rapidcsv/tests/test064.cpp
#        examples/libraries/rapidcsv/tests/test065.cpp
#        examples/libraries/rapidcsv/tests/test066.cpp
#        examples/libraries/rapidcsv/tests/unittest.h
        )
