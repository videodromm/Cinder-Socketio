Cinder-Socketio

Cinder implementation of Socket.IO

http://www.libcinder.org

Based on https://github.com/kusharami/socket.io-client-cpp
Using websocketpp from https://github.com/zaphoyd/websocketpp

nodejs test server in the echo_server folder, run 
```
npm i
npm start
```

Build with Visual Studio 2019:
Choose ISO C++17
Add preprocessor: _WEBSOCKETPP_CPP11_RANDOM_DEVICE_;_WEBSOCKETPP_CPP11_TYPE_TRAITS_;ASIO_STANDALONE;_WEBSOCKETPP_CPP11_FUNCTIONAL_;ASIO_HAS_STD_ARRAY;

