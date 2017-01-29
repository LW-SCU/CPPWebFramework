/*
 Copyright 2017 Herik Lima de Castro and Marcelo Medeiros Eler
 Distributed under MIT license, or public domain if desired and
 recognized in your jurisdiction.
 See file LICENSE for detail.
*/

#ifndef CPPWEBSERVLET_H
#define CPPWEBSERVLET_H

#include "httpservlet.h"
#include "httpservletrequest.h"
#include "httpservletresponse.h"

namespace CWF
{
   /**
    * @brief This class is responsible for displaying the standard pages of C++ Web Framework: index, examples, documentation, ssl and authors.
    */
    class CppWebServlet : public HttpServlet
    {
    public:
        /**
         * @brief Method overload to answer the requests the system default pages.
         * @param HttpServletRequest  &request  : Parameter generated by HttpReadRequest.
         * @param HttpServletResponse &response : Parameter generated by HttpReadRequest.
         */
        void doGet(HttpServletRequest &request, HttpServletResponse &response) override;
    };
}

#endif // CPPWEBSERVLET_H