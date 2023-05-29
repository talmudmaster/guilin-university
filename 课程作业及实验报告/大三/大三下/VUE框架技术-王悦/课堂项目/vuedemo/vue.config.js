module.exports = {
    /* 部署生产环境和开发环境下的URL：可对当前环境进行区分，baseUrl 从 Vue CLI 3.3 起已弃用，要使用publicPath */
    // publicPath: "/",
    // assetsDir: "static/lipin",
    // outputDir: "dist",
    // runtimeCompiler: true,
    // productionSourceMap: false,
    /* webpack-dev-server 相关配置 */
    devServer: {
        /* 自动打开浏览器 */
        open: false,
        /* 设置为0.0.0.0则所有的地址均能访问 */
        host: '0.0.0.0',
        port: 80,
        https: false,
        // hotOnly: false,
        /* 使用代理服务器 */
        proxy: {
            // 拦击含有'/api'的请求，转发至target指定的服务求
            '/api': {
                target: 'http://blog.coldworld.top:8080',
                /* 允许跨域 */
                changeOrigin: true,
                // 路径重写，把路径中的/api替换
                "pathRewrite": {
                    "^/api": "" //匹配请求路径里面有 /api 替换成 https://www.xxx.cn
                },
            },
        },
    },
}