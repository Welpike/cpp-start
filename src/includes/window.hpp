#ifndef __WINDOW__
    #define __WINDOW__

    #include <string>

    class Window
    {
        public:
            Window() = default;  // if attr is add here, you don't have to implement the methodt
            Window(std::string t, int w, int h);
            void run() const noexcept;
            std::string getTitle() const;
            void setTitle(const std::string new_title);
        private:
            std::string title;
            int height;
            int width;
    };

#endif