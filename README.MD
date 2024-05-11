# 提供给Java的Silk编解码native接口

# Get started

```shell
# 在当前项目目录下执行下面2个命令
cmake .

make
```

# Java使用方式

```java
package com.l1yp;

import java.io.OutputStream;

public class SilkCodec {
  public native int nativeDecodeSilk(byte[] src, OutputStream os, int rates);
}

```

# JNI头文件生成命令(JDK21)
```SHELL
javac SilkCodec.java -h .
```