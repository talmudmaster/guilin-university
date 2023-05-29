# 笔记

# Typora的使用

## 插入标题

![63114990233](javaee909.assets/1631149902330.png)

## 图片保存位置设置

![63115006879](javaee909.assets\1631150068799.png)

![63115034473](javaee909.assets/1631150344738.png)



# 环境准备

•JDK1.8.0_201（及以上版本）

•Apache Maven3.3.0以上版本

•IntelliJIDEA Ultimate旗舰版

### 用到的软件：

![63115131475](javaee909.assets/1631151314756.png)

jdk安装

maven安装（解压即可）

~~~bash
#jdk
http://www.pc6.com/infoview/Article_114975.html
(1)新建->变量名"JAVA_HOME"，变量值"C:\Program Files\Java\jdk1.8.0_271"（即JDK的安装路径）
(2)编辑->变量名"Path"，在原变量值的最前面加上“;%JAVA_HOME%\bin;”
(3)新建->变量名“CLASSPATH”,变量值“.;%JAVA_HOME%\lib;%JAVA_HOME%\lib\dt.jar;%JAVA_HOME%\lib\tools.jar”

#maven
https://blog.csdn.net/huo920/article/details/82082403
(1)新建->变量名"M2_HOME"，变量值对应Maven的解压目录即可"D:\x\apache-maven-3.6.0" 

(2)编辑->变量名"Path"，在原变量值的最后面加上“;%M2_HOME%\bin;” 

(3)需要修改Maven解压目录中D:\dev\apache-maven-3.6.0\conf\settings.xml文件
#1. 本地仓库位置修改
  <localRepository>D:\dev\apache-maven-3.6.0\localrepo</localRepository>

#2. 添加国内镜像源
添加<mirrors>标签下<mirror>，添加国内镜像源，这样下载jar包速度很快。默认的中央仓库有时候甚至连接不通。一般使用阿里云镜像库即可。Maven会默认从这几个开始下载，没有的话就会去中央仓库了
<!-- 阿里云仓库 -->
<mirror>
    <id>alimaven</id>
    <mirrorOf>central</mirrorOf>
    <name>aliyun maven</name>
    <url>http://maven.aliyun.com/nexus/content/repositories/central/</url>
</mirror> 
~~~

![63115327401](javaee909.assets/1631153274014.png)

## idea安装



![63115363502](javaee909.assets/1631153635020.png)

![63115367121](javaee909.assets/1631153671210.png)

![63115377295](javaee909.assets/1631153772950.png)![63115387092](javaee909.assets/1631153870928.png)

# maven工程案例



![63115407497](javaee909.assets/1631154074972.png)

![63115425223](javaee909.assets/1631154252238.png)

![63115430098](javaee909.assets/1631154300981.png)

![63115436023](javaee909.assets/1631154360236.png)

查看是否是从阿里云仓库下载依赖，若不是则重新配置maven。

![63115451381](javaee909.assets/1631154513819.png)

查看项目JDK是否正确

![63115475514](javaee909.assets/1631154755148.png)

![63115486061](javaee909.assets/1631154860610-1631154861640.png)

![63115523562](javaee909.assets/1631155235627.png)

指定maven的JDK为1.8

### pom.xml

~~~xml
<?xml version="1.0" encoding="UTF-8"?>
<project xmlns="http://maven.apache.org/POM/4.0.0"
         xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         xsi:schemaLocation="http://maven.apache.org/POM/4.0.0 http://maven.apache.org/xsd/maven-4.0.0.xsd">
    <modelVersion>4.0.0</modelVersion>

    <groupId>com.ljxy</groupId>
    <artifactId>mavendemo1</artifactId>
    <version>1.0-SNAPSHOT</version>
    <dependencies>
        <dependency>
            <groupId>junit</groupId>
            <artifactId>junit</artifactId>
            <version>4.12</version>
        </dependency>
        <dependency>
            <groupId>cn.hutool</groupId>
            <artifactId>hutool-all</artifactId>
            <version>5.7.11</version>
        </dependency>
    </dependencies>
    <build>
        <defaultGoal>install</defaultGoal>

        <plugins>
            <plugin>
                <groupId>org.apache.maven.plugins</groupId>
                <artifactId>maven-compiler-plugin</artifactId>
                <version>3.8.1</version>
                <configuration>
                    <source>1.8</source>
                    <target>1.8</target>
                </configuration>
            </plugin>
            <plugin>
                <groupId>org.apache.maven.plugins</groupId>
                <artifactId>maven-resources-plugin</artifactId>
                <version>3.2.0</version>
                <configuration>
                    <encoding>UTF-8</encoding>
                </configuration>
            </plugin>


        </plugins>
    </build>

</project>
~~~

### Hello.java

~~~
import cn.hutool.core.date.DateUtil;

import java.util.Date;

public class Hello {
    public static void main(String[] args) {
        System.out.println("hello");

        System.out.println(DateUtil.today());
        String format = DateUtil.format(new Date(), "yyyy年MM月dd日 HH时mm分ss秒");
        System.out.println("format = " + format);
    }
}

~~~

添加springboot依赖+spring-boot-starter-web依赖

```xml
<?xml version="1.0" encoding="UTF-8"?>
<project xmlns="http://maven.apache.org/POM/4.0.0"
         xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         xsi:schemaLocation="http://maven.apache.org/POM/4.0.0 http://maven.apache.org/xsd/maven-4.0.0.xsd">
    <modelVersion>4.0.0</modelVersion>


    <parent>
        <groupId>org.springframework.boot</groupId>
        <artifactId>spring-boot-starter-parent</artifactId>
        <version>2.1.3.RELEASE</version>
    </parent>

    <groupId>com.ljxy</groupId>
    <artifactId>mavendemo1</artifactId>
    <version>1.0-SNAPSHOT</version>
    <dependencies>
        <!-- 引入Web场景依赖启动器 -->
        <dependency>
            <groupId>org.springframework.boot</groupId>
            <artifactId>spring-boot-starter-web</artifactId>
        </dependency>


        <dependency>
            <groupId>junit</groupId>
            <artifactId>junit</artifactId>
            <version>4.12</version>
        </dependency>
        <dependency>
            <groupId>cn.hutool</groupId>
            <artifactId>hutool-all</artifactId>
            <version>5.7.1</version>
        </dependency>
    </dependencies>
    <build>
        <defaultGoal>install</defaultGoal>

        <plugins>
            <plugin>
                <groupId>org.apache.maven.plugins</groupId>
                <artifactId>maven-compiler-plugin</artifactId>
                <version>3.8.1</version>
                <configuration>
                    <source>1.8</source>
                    <target>1.8</target>
                </configuration>
            </plugin>
            <plugin>
                <groupId>org.apache.maven.plugins</groupId>
                <artifactId>maven-resources-plugin</artifactId>
                <version>3.2.0</version>
                <configuration>
                    <encoding>UTF-8</encoding>
                </configuration>
            </plugin>


        </plugins>
    </build>

</project>
```

创建启动类

![63115902153](javaee909.assets/1631159021530.png)

查看占用8080端口的程序pid

![63115929257](javaee909.assets/1631159292573.png)

创建控制器

![63115985563](javaee909.assets/1631159855634.png)