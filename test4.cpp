#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
 
#include <iostream>
#include <Eigen/Dense>
using Eigen::MatrixXd;

BOOST_AUTO_TEST_CASE(universeInOrder)
{
	MatrixXd m1(2,2);
	m1(0,0) = 1; 
	m1(0,1) = 3;
	m1(1,0) = 2;
	m1(1,1) = 5;
	
	MatrixXd m2(2,2);
	m2(0,0) = 1; 
	m2(0,1) = 2;
	m2(1,0) = 3;
	m2(1,1) = 4;
	
	MatrixXd m_res(2,2);
	m_res(0,0) = 7; 
	m_res(0,1) = 15;
	m_res(1,0) = 12;
	m_res(1,1) = 24;
	
	int result = (m1*m2).isApprox(m_res);
	
	BOOST_CHECK(result == 0);

	
}
