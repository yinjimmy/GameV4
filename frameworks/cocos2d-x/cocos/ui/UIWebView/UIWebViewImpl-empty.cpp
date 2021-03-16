
#include "ui/UIWebView/UIWebViewImpl-empty.h"

#include <unordered_map>
#include <stdlib.h>
#include <string>

namespace cocos2d {
namespace ui{


    WebViewImpl::WebViewImpl(WebView *webView) : _viewTag(-1), _webView(webView) {
    }

    WebViewImpl::~WebViewImpl() {
    }

    void WebViewImpl::loadData(const Data &data, const std::string &MIMEType, const std::string &encoding, const std::string &baseURL) {
    }

    void WebViewImpl::loadHTMLString(const std::string &string, const std::string &baseURL) {
    }

    void WebViewImpl::loadURL(const std::string &url) {
    }

    void WebViewImpl::loadURL(const std::string &url, bool cleanCachedData) {
    }

    void WebViewImpl::loadFile(const std::string &fileName) {
    }

    void WebViewImpl::stopLoading() {
    }

    void WebViewImpl::reload() {
    }

    bool WebViewImpl::canGoBack() {
        return false;
    }

    bool WebViewImpl::canGoForward() {
        return false;
    }

    void WebViewImpl::goBack() {
    }

    void WebViewImpl::goForward() {
    }

    void WebViewImpl::setJavascriptInterfaceScheme(const std::string &scheme) {
    }

    void WebViewImpl::evaluateJS(const std::string &js) {
    }

    void WebViewImpl::setScalesPageToFit(const bool scalesPageToFit) {
    }

    bool WebViewImpl::shouldStartLoading(const int viewTag, const std::string &url) {
        return false;
    }

    void WebViewImpl::didFinishLoading(const int viewTag, const std::string &url){
    }

    void WebViewImpl::didFailLoading(const int viewTag, const std::string &url){
    }

    void WebViewImpl::onJsCallback(const int viewTag, const std::string &message){
    }

    void WebViewImpl::draw(cocos2d::Renderer *renderer, cocos2d::Mat4 const &transform, uint32_t flags) {
    }

    void WebViewImpl::setVisible(bool visible) {
    }
    
    void WebViewImpl::setOpacityWebView(const float opacity){
    };
    
    
    float WebViewImpl::getOpacityWebView()const{
        return 1.0f;
    };
    
    void WebViewImpl::setBackgroundTransparent(){
    };

    void WebViewImpl::setBounces(bool bounces) {
        // empty function as this was mainly a fix for iOS
    }
} // namespace ui
} //namespace cocos2d
