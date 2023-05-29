# 基于SpringBoot+knife4j实现后端API开发

https://doc.xiaominfo.com/knife4j/documentation/get_start.html

## 创建SpringBoot项目-apidemo

![image-20211108211633283](基于SpringBoot+Swagger实现后端API开发.assets/image-20211108211633283.png)



## 创建RESTful接口服务

~~~java
package com.glxy.apidemo.controller;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class ApiController {
    //http://localhost:8080/test
    @RequestMapping(value = "/test",method = {RequestMethod.GET,RequestMethod.POST})
    public String test( String name) {
        return "hello,"+name;
    }
}
~~~

## 测试项目能否正常运行

![image-20211108212630113](基于SpringBoot+Swagger实现后端API开发.assets/image-20211108212630113.png)

## 在maven项目的`pom.xml`中引入Knife4j的依赖包

~~~xml
<dependencies>
        <!-- knife4j -->
        <dependency>
            <groupId>com.github.xiaoymin</groupId>
            <artifactId>knife4j-spring-boot-starter</artifactId>
            <version>2.0.9</version>
        </dependency>
        <!-- Knife4j API文档 -->
        <dependency>
            <groupId>com.github.xiaoymin</groupId>
            <artifactId>knife4j-spring-ui</artifactId>
            <version>2.0.9</version>
        </dependency> 
</dependencies>
 
~~~

## 配置knife4j

```properties
#knife4j配置   https://doc.xiaominfo.com/knife4j/documentation/enhance.html
knife4j.enable=true
#开启生产环境屏蔽
knife4j.production=false
# 是否开启一个默认的跨域配置,该功能配合自定义Host使用，默认值为false
knife4j.cors=true
```

~~~java
package com.glxy.apidemo.config;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import springfox.documentation.builders.ApiInfoBuilder;
import springfox.documentation.builders.PathSelectors;
import springfox.documentation.builders.RequestHandlerSelectors;
import springfox.documentation.spi.DocumentationType;
import springfox.documentation.spring.web.plugins.Docket;
import springfox.documentation.swagger2.annotations.EnableSwagger2WebMvc;

@Configuration
@EnableSwagger2WebMvc
public class Knife4jConfiguration {

    @Bean(value = "defaultApi2")
    public Docket defaultApi2() {
        Docket docket=new Docket(DocumentationType.SWAGGER_2)
                .apiInfo(new ApiInfoBuilder()
                        .title("后端RESTful APIs")
                        .description("# 后端RESTful APIs")
                        .termsOfServiceUrl("http://www.xx.com/")
                        .contact("xx@qq.com")
                        .version("1.0")
                        .build())
                //分组名称
                .groupName("2.X版本")
                .select()
                //这里指定扫描包路径
                .apis(RequestHandlerSelectors.basePackage("com.glxy.apidemo"))
                .paths(PathSelectors.any())
                .build();
        return docket;
    }
}
~~~

## 项目结构如下

![](基于SpringBoot+Swagger实现后端API开发.assets/image-20211108213307175.png)

## 利用注解配置生成接口api在线技术文档

示例代码：

~~~java
@Api(tags = "首页模块")
@RestController
public class IndexController {

    @ApiImplicitParam(name = "name",value = "姓名",required = true)
    @ApiOperation(value = "向客人问好")
    @GetMapping("/sayHi")
    public ResponseEntity<String> sayHi(@RequestParam(value = "name")String name){
        return ResponseEntity.ok("Hi:"+name);
    }
}
~~~

~~~java
@RestController 
@Api(tags = "后台服务API接口")
public class ApiController { 
    //http://localhost:8080/test
    @RequestMapping(value = "/test",method = {RequestMethod.GET,RequestMethod.POST})
    @ApiOperation(value = "/test", notes = "测试")
    public String test( String name) {           
        return "hello,"+name;
    }  
} 
~~~

启动Spring Boot工程，在浏览器中访问: http://localhost:8080/doc.html

![image-20211108221726125](基于SpringBoot+Swagger实现后端API开发.assets/image-20211108221726125.png)

## 增强功能

增强功能需要通过配置yml配置文件开启增强,自2.0.6开始，需配置：

```properties
knife4j.enable=true
```

如接口排序规则需使用`Knife4j`提供的增强注解`@ApiOperationSupport`

```java
@ApiOperationSupport(order = 33)
```

## 导出离线文档

![image-20211108214049059](基于SpringBoot+Swagger实现后端API开发.assets/image-20211108214049059.png)

## 

## Slf4j的使用

添加lombok依赖

~~~xml
        <dependency>
            <groupId>org.projectlombok</groupId>
            <artifactId>lombok</artifactId>
            <optional>true</optional>
        </dependency>
~~~

在类定义前使用@Slf4j注解，在方法中使用log.xxx()方法输出日志信息;

![image-20211108215946295](基于SpringBoot+Swagger实现后端API开发.assets/image-20211108215946295.png)

在配置文件中可配置日志输出级别

~~~properties
#输出日志级别
logging.level.com.glxy.apidemo.controller=info
~~~

