#ifndef __NAMESPACETEST__
    #define __NAMESPACETEST__

    namespace Namespacetest
    {
        void test();
    }

    namespace A
    {
        inline namespace B
        {
            
        }
    }

    namespace TooLongNamespaceName
    {
    }
    
    namespace TLNN = TooLongNamespaceName;  // aliasing

#endif