# SpringBoot核心配置与注解

#  **案例2-1全局配置信息获取**

# 一、 实验目标

1、 进一步熟悉IDEA开发环境的使用

2、 使用Spring Initializr方式构建Spring Boot项目

3、 掌握Spring Boot全局配置文件与注解的使用

4、 自定义配置和多环境配置的使用

# 二、 实验环境

  Windows操作系统+JDK1.8+Maven3.6+IDEA2019

# 三、 实验要求

1、 使用IDEA的Spring Initializr构建Spring Boot项目

2、 在全局配置文件中设置配置信息如：

文件上传路径（uploadfile.path=d://upfiles）

3、 在类中获取在全局配置文件设置的信息.

![img](SpringBoot核心配置与注解.assets/clip_image002.jpg)

4、 在浏览器上访问 http://localhost:8080/api/filepath时输出显示上面设置的参数信息。

![img](SpringBoot核心配置与注解.assets/clip_image004.jpg)

5、 采用多环境配置的方法配置开发环境和生产环境分别运行在不同的端口和设置不同文件上传路径

四、 实验关键步骤

1、 使用Spring Initializr方式构建Spring Boot项目并选择         spring-boot-starter-web框架。

2、 创建控制器: ApiController

![img](SpringBoot核心配置与注解.assets/clip_image006.jpg)

3、 使用yaml格式配置

![img](SpringBoot核心配置与注解.assets/clip_image007.png)

4、 使用@PropertySource加载自定义配置文件

![img](SpringBoot核心配置与注解.assets/clip_image008.png)

![img](SpringBoot核心配置与注解.assets/clip_image010.jpg)

idea开发使用@Value注解注入.properties文件中文乱码问题解决
 @PropertySource(value = **"classpath:my.properties"**,encoding = **"UTF-8"**)

![img](SpringBoot核心配置与注解.assets/clip_image012.jpg)

5、 多环境配置

![img](SpringBoot核心配置与注解.assets/clip_image014.jpg)

![img](SpringBoot核心配置与注解.assets/clip_image016.jpg)

![img](SpringBoot核心配置与注解.assets/clip_image018.jpg)

 

6、 使用@Configuration指定自定义配置类

![img](SpringBoot核心配置与注解.assets/clip_image020.jpg)

![img](SpringBoot核心配置与注解.assets/clip_image021.png)

![img](SpringBoot核心配置与注解.assets/clip_image023.jpg)

![img](SpringBoot核心配置与注解.assets/clip_image025.jpg)

![img](SpringBoot核心配置与注解.assets/clip_image027.jpg)

五、 实验结果及测试效果截图

 