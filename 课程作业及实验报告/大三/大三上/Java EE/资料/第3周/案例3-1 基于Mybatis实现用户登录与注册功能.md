# 案例3-1 基于Mybatis实现用户登录与注册功能

# 一、 实验目标

1、 熟悉IDEA开发环境的使用及数据库管理工具的使用

2、 掌握Mybatis和Druid框架的使用

3、 掌握Mybatis Gernator的使用

4、 使用注解的方式整合MyBatis

5、 使用配置文件的方式整合MyBatis

# 二、 实验环境

  Windows操作系统+JDK1.8+Maven3.6+IDEA2019+Mysql数据库+Mybatis Gernator

# 三、 实验要求

1、 准备好Mysql数据库环境:mysql5.5+navicat

2、 使用IDEA的Spring Initializr构建Spring Boot项目并添加Spring web、Mybatis和Druid框架

3、 在全局配置文件中配置Mybatis参数

4、 Mybatis Gernator生成Mybatis数据库访问接口层

5、 在浏览器上访问 http://localhost:8080/api/login?name=test&password=1234时在客户端提示并在后服务端控制台输出：用户名称或密码是否正确

6、 http://localhost:8080/api/add?id=1&name=test&password=1234时在客户端提示并在服务端控制台输出：用户信息新增是否成功

7、 http://localhost:8080/api/update?id=1&name=test&password=test时在客户端提示并在服务端控制台输出：用户信息更新是否成功

8、 http://localhost:8080/api/delete?id=1时在客户端提示并在服务端控制台输出：用户信息删除是否成功

1、  

# 四、 实验关键步骤

1、 启动数据库服务并创建好数据库 (grade)及表：用户信息表t_user(用户id,用户名称，用户密码,手机,邮箱,头像)。

![image-20210915202130414](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202130414.png)

~~~mysql
CREATE database if NOT EXISTS `grade` default character set utf8mb4 collate utf8mb4_unicode_ci;
use `grade`;
DROP TABLE IF EXISTS `t_user`;
CREATE TABLE `t_user` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(50) NOT NULL,
  `password` varchar(50) NOT NULL,
  `telephone` varchar(50) DEFAULT NULL,
  `email` varchar(200) DEFAULT NULL,
  `photo` varchar(200) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
~~~



2、 使用Spring Initializr方式构建Spring Boot项目并选择         需要用到的框架，并添加MySQL数据库连接驱动。

~~~xml
<dependency>
    <groupId>mysql</groupId>
    <artifactId>mysql-connector-java</artifactId>
    <version>5.1.40</version>
    <scope>runtime</scope>
</dependency>
<dependency>
    <groupId>com.alibaba</groupId>
    <artifactId>druid-spring-boot-starter</artifactId>
    <version>1.1.10</version>
</dependency>

~~~

![image-20210915202209354](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202209354.png)

~~~properties
# 5.x的mysql数据库驱动：
spring.datasource.driver-class-name=com.mysql.jdbc.Driver
spring.datasource.url=jdbc:mysql://localhost:3306/grade??characterEncoding=UTF-8&useUnicode=true&useSSL=false
spring.datasource.username=root
spring.datasource.password=
~~~

如果是用的MySQL数据库连接驱动8.0以上的：

~~~xml

        <dependency>
            <groupId>org.mybatis.spring.boot</groupId>
            <artifactId>mybatis-spring-boot-starter</artifactId>
            <version>2.1.4</version>
        </dependency>
<!--            没指定版本即为springboot中的默认mysql驱动是8以上的驱动-->
        <dependency>
            <groupId>mysql</groupId>
            <artifactId>mysql-connector-java</artifactId>
            <scope>runtime</scope>
        </dependency>
~~~

此时数据库驱动的配置为：

~~~properties
# 8.x的mysql数据库驱动：
spring.datasource.driver-class-name=com.mysql.cj.jdbc.Driver
# 数据源名称
spring.datasource.name=defaultDataSource
# 数据库连接地址 UTC代表的是全球标准时间 ，但是我们使用的时间是北京时区也就是东八区，领先UTC八个小时。 使用上海时间 serverTimezone=Asia/Shanghai   北京时间  GMT%2B8
spring.datasource.url=jdbc:mysql://localhost:3306/grade?serverTimezone=Asia/Shanghai&useSSL=false&characterEncoding=utf8
# 数据库用户名&密码：
spring.datasource.username=root
spring.datasource.password=
~~~

3、 创建Mapper接口和控制器类

![image-20210915202253409](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202253409.png)

![image-20210915202301530](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202301530.png)

4、 Mybatis Gernator生成Mybatis数据库访问接口层（注意一定要有src目录，否则不会生成src），利用Mybatis-generator工具自动生成Mybatis模块，并复制到项目中。

![image-20210915202325118](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202325118.png)

generatorConfig.xml中参数配置：

​                               ![image-20210915202351281](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202351281.png)

先修改generatorConfig.xml的数据库配置参数，然后点击run.bat运行即生成Mybatis模块文件：

![image-20210915202356331](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202356331.png)

![image-20210915202403783](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202403783.png)

 

1. 使用注解@Mapper配置TUserMapper 或 在启动类前配置：@MapperScan("com.ljxy.ch31.dao")

​                               ![image-20210915202447103](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202447103.png)

 

2. 在全局配置文件设置mybatis别名：

```properties
#指定Mybatis的Mapper文件
mybatis.mapperLocations=classpath:**/mapping/*.xml
#指定Mybatis的实体目录
mybatis.typeAliasesPackage=com.ljxy.ch31.dao.model
```

或

```properties
#指定Mybatis的Mapper文件
mybatis.mapper-locations=classpath:**/mapping/*.xml
#指定Mybatis的实体目录
mybatis.type-aliases-package=com.ljxy.ch31.dao.model

```

3. 在pom文件配置**resource**：

   ![image-20210926201843721](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210926201843721.png)

   若将mapping目录移到resources下即可省去下面的配置:,否则需要按下面的方法进行配置:

    ![image-20210915202526643](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202526643.png)

 ~~~xml
<resources>
    <resource>
        <directory>src/main/java</directory>
        <includes>
            <include>**/*.xml</include>
            <include>**/*.properties</include>
        </includes>
        <filtering>true</filtering>
    </resource>
    <resource>
        <directory>src/main/resources</directory>
        <includes>
            <include>**/*.xml</include>
            <include>**/*.properties</include>
        </includes>
        <filtering>true</filtering>
    </resource>
</resources>

 ~~~

4. 基于模块实现数据库访问和创建测试类

![image-20210915202605511](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202605511.png)

 ![image-20210915202619350](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202619350.png)

若出现下面的的提示：

java.lang.IllegalStateException: Optional int parameter 'id' is present but cannot be translated into a null value due to being declared as a primitive type. Consider declaring it as object wrapper for the corresponding primitive type.

则需要将int id改为：Integer id

 ![image-20210915202625774](案例3-1 基于Mybatis实现用户登录与注册功能.assets/image-20210915202625774.png)

5. 启动应用后在浏览器中查看运行结果。

 

一、 实验结果及测试效果截图