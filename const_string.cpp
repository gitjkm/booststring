#define BOOST_TEST_DYN_LINK
#include "const_string.hpp"
#define BOOST_TEST_MODULE const_string_module
#include <boost/test/unit_test.hpp>

using namespace boost;

BOOST_AUTO_TEST_SUITE(const_string_suite)

BOOST_AUTO_TEST_CASE ( constructors_test ) 
{
    const_string cs0("");
    BOOST_CHECK_EQUAL(cs0.length(), (size_t)0);
    BOOST_CHECK(cs0.is_empty());

    const_string cs1("test_string");
    BOOST_CHECK_EQUAL(strcmp(cs1.data(), "test_string"), 0);
    BOOST_CHECK_EQUAL(cs1.length(), strlen("test_string"));

    string s("test_string1");
    const_string s2(s);
    BOOST_CHECK_EQUAL(strcmp(s2.data(),"test_string1"),0);
    
}

BOOST_AUTO_TEST_SUITE_END()

