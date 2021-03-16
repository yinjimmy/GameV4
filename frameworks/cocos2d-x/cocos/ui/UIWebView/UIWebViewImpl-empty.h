
#pragma once

/// @cond DO_NOT_SHOW

#include <iosfwd>
#include <stdint.h>

namespace cocos2d {
    class Data;
    class Renderer;
    class Mat4;

    namespace ui{
        class WebView;
    }
}

namespace cocos2d {
namespace ui{

    class WebViewImpl {
    public:
        WebViewImpl(cocos2d::ui::WebView *webView);

        virtual ~WebViewImpl();

        void setJavascriptInterfaceScheme(const std::string &scheme);

        void loadData(const cocos2d::Data &data, const std::string &MIMEType, const std::string &encoding, const std::string &baseURL);

        void loadHTMLString(const std::string &string, const std::string &baseURL);

        void loadURL(const std::string &url);
        void loadURL(const std::string &url, bool cleanCachedData);

        void loadFile(const std::string &fileName);

        void stopLoading();

        void reload();

        bool canGoBack();

        bool canGoForward();

        void goBack();

        void goForward();

        void evaluateJS(const std::string &js);

        void setScalesPageToFit(const bool scalesPageToFit);

        virtual void draw(cocos2d::Renderer *renderer, cocos2d::Mat4 const &transform, uint32_t flags);

        virtual void setVisible(bool visible);

        void setBounces(bool bounces);
        
        void setOpacityWebView(float opacity);
        
        float getOpacityWebView()const;
        
        void setBackgroundTransparent();

        static bool shouldStartLoading(const int viewTag, const std::string &url);
        static void didFinishLoading(const int viewTag, const std::string &url);
        static void didFailLoading(const int viewTag, const std::string &url);
        static void onJsCallback(const int viewTag, const std::string &message);

    private:
        int _viewTag;
        WebView *_webView;
    };

} // namespace ui
} //cocos2d


/// @endcond
