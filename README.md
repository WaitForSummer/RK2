```sh
$ alias edit=code
$ git clone https://github.com/sprakhar77/Design-Patterns.git RK2 
Cloning into 'RK2'...
remote: Enumerating objects: 395, done.
remote: Counting objects: 100% (395/395), done.
remote: Compressing objects: 100% (290/290), done.
remote: Total 395 (delta 140), reused 358 (delta 103), pack-reused 0 (from 0)
Receiving objects: 100% (395/395), 49.55 KiB | 465.00 KiB/s, done.
Resolving deltas: 100% (140/140), done.

$ cd RK2

$ tree
.
├── Behavioral
│   ├── Chain Of Responsibility
│   │   ├── ChainOfResponsibility.pro
│   │   ├── ConcreteHandlerA.cpp
│   │   ├── ConcreteHandlerA.h
│   │   ├── ConcreteHandlerB.cpp
│   │   ├── ConcreteHandlerB.h
│   │   ├── HandlerBase.cpp
│   │   ├── HandlerBase.h
│   │   ├── IHandler.h
│   │   └── main.cpp
│   ├── Command
│   │   ├── Command.pro
│   │   ├── ConcreteCommandA.cpp
│   │   ├── ConcreteCommandA.h
│   │   ├── ConcreteCommandB.cpp
│   │   ├── ConcreteCommandB.h
│   │   ├── ConcreteRecieverX.cpp
│   │   ├── ConcreteRecieverX.h
│   │   ├── ConcreteRecieverY.cpp
│   │   ├── ConcreteRecieverY.h
│   │   ├── ICommand.h
│   │   ├── IInvoker.h
│   │   ├── Invoker.cpp
│   │   ├── Invoker.h
│   │   ├── IReciever.h
│   │   └── main.cpp
│   ├── Iterator
│   │   ├── ConcreteAggregate.cpp
│   │   ├── ConcreteAggregate.h
│   │   ├── ConcreteIterator.cpp
│   │   ├── ConcreteIterator.h
│   │   ├── IAggregate.h
│   │   ├── IIterator.h
│   │   ├── Iterator.pro
│   │   └── main.cpp
│   ├── Mediator
│   │   ├── ConcreteCollegue.cpp
│   │   ├── ConcreteCollegue.h
│   │   ├── ConcreteMediator.cpp
│   │   ├── ConcreteMediator.h
│   │   ├── ICollegue.h
│   │   ├── IMediator.h
│   │   ├── main.cpp
│   │   └── Mediator.pro
│   ├── Memento
│   │   ├── ConcreteCareTaker.cpp
│   │   ├── ConcreteCareTaker.h
│   │   ├── ConcreteMemento.cpp
│   │   ├── ConcreteMemento.h
│   │   ├── ConcreteOrignator.cpp
│   │   ├── ConcreteOrignator.h
│   │   ├── ICareTaker.h
│   │   ├── IMemento.h
│   │   ├── IOrignator.h
│   │   ├── main.cpp
│   │   └── Memento.pro
│   ├── Observer
│   │   ├── ConcreteObserverA.cpp
│   │   ├── ConcreteObserverA.h
│   │   ├── ConcreteObserverB.cpp
│   │   ├── ConcreteObserverB.h
│   │   ├── ConcreteSubject.cpp
│   │   ├── ConcreteSubject.h
│   │   ├── IObserver.h
│   │   ├── ISubject.h
│   │   ├── main.cpp
│   │   └── Observer.pro
│   ├── State
│   │   ├── ConcreteContext.cpp
│   │   ├── ConcreteContext.h
│   │   ├── ConcreteStateA.cpp
│   │   ├── ConcreteStateA.h
│   │   ├── ConcreteStateB.cpp
│   │   ├── ConcreteStateB.h
│   │   ├── ConcreteStateC.cpp
│   │   ├── ConcreteStateC.h
│   │   ├── ConcreteStateD.cpp
│   │   ├── ConcreteStateD.h
│   │   ├── IContext.h
│   │   ├── IState.h
│   │   ├── main.cpp
│   │   ├── StateBase.cpp
│   │   ├── StateBase.h
│   │   └── State.pro
│   ├── Stratergy
│   │   ├── ConcreteStratergyA.cpp
│   │   ├── ConcreteStratergyA.h
│   │   ├── ConcreteStratergyB.cpp
│   │   ├── ConcreteStratergyB.h
│   │   ├── Context.cpp
│   │   ├── Context.h
│   │   ├── IContext.h
│   │   ├── IStratergy.h
│   │   ├── main.cpp
│   │   └── Stratergy.pro
│   ├── Template Method
│   │   ├── AbstractClass.cpp
│   │   ├── AbstractClass.h
│   │   ├── ConcreteClassX.cpp
│   │   ├── ConcreteClassX.h
│   │   ├── ConcreteClassY.cpp
│   │   ├── ConcreteClassY.h
│   │   ├── main.cpp
│   │   └── TemplateMethod.pro
│   └── Visitor
│       ├── ConcreteElementA.cpp
│       ├── ConcreteElementA.h
│       ├── ConcreteElementB.cpp
│       ├── ConcreteElementB.h
│       ├── ConcreteElementC.cpp
│       ├── ConcreteElementC.h
│       ├── ConcreteVisitor.cpp
│       ├── ConcreteVisitor.h
│       ├── IElement.h
│       ├── IElementVisitor.h
│       ├── main.cpp
│       └── Visitor.pro
├── Creational
│   ├── Abstract Factory
│   │   ├── AbstractFactory.pro
│   │   ├── ConcreteFactoryX.cpp
│   │   ├── ConcreteFactoryX.h
│   │   ├── ConcreteFactoryY.cpp
│   │   ├── ConcreteFactoryY.h
│   │   ├── ConcreteProductAX.cpp
│   │   ├── ConcreteProductAX.h
│   │   ├── ConcreteProductAY.cpp
│   │   ├── ConcreteProductAY.h
│   │   ├── ConcreteProductBX.cpp
│   │   ├── ConcreteProductBX.h
│   │   ├── ConcreteProductBY.cpp
│   │   ├── ConcreteProductBY.h
│   │   ├── IFactory.h
│   │   ├── IProductA.h
│   │   ├── IProductB.h
│   │   └── main.cpp
│   ├── Builder
│   │   ├── BuilderBase.cpp
│   │   ├── BuilderBase.h
│   │   ├── Builder.pro
│   │   ├── ConcreteBuilderX.cpp
│   │   ├── ConcreteBuilderX.h
│   │   ├── ConcreteBuilderY.cpp
│   │   ├── ConcreteBuilderY.h
│   │   ├── ConcreteDirector.cpp
│   │   ├── ConcreteDirector.h
│   │   ├── IBuilder.h
│   │   ├── IDirector.h
│   │   ├── main.cpp
│   │   ├── Product.cpp
│   │   └── Product.h
│   ├── Factory
│   │   ├── ConcreteFactory.cpp
│   │   ├── ConcreteFactory.h
│   │   ├── ConcreteProductA.cpp
│   │   ├── ConcreteProductA.h
│   │   ├── ConcreteProductB.cpp
│   │   ├── ConcreteProductB.h
│   │   ├── Factory.pro
│   │   ├── IFactory.h
│   │   ├── IProduct.h
│   │   └── main.cpp
│   ├── Prototype
│   │   ├── ConcretePrototypeA.cpp
│   │   ├── ConcretePrototypeA.h
│   │   ├── ConcretePrototypeB.cpp
│   │   ├── ConcretePrototypeB.h
│   │   ├── ConcretePrototypeFactory.cpp
│   │   ├── ConcretePrototypeFactory.h
│   │   ├── IPrototypeFactory.h
│   │   ├── IPrototype.h
│   │   ├── main.cpp
│   │   └── Prototype.pro
│   └── Singleton
│       ├── main.cpp
│       ├── Singleton.cpp
│       ├── Singleton.h
│       └── Singleton.pro
├── README.md
└── Structural
    ├── Adapter
    │   ├── Adaptee.cpp
    │   ├── Adaptee.h
    │   ├── Adapter.pro
    │   ├── IAdaptee.h
    │   ├── ITarget.h
    │   ├── main.cpp
    │   ├── TargetAdapter.cpp
    │   └── TargetAdapter.h
    ├── Bridge
    │   ├── Bridge.pro
    │   ├── ConcreteImplementationX.cpp
    │   ├── ConcreteImplementationX.h
    │   ├── ConcreteImplementationY.cpp
    │   ├── ConcreteImplementationY.h
    │   ├── IAbstraction.h
    │   ├── IImplementor.h
    │   ├── main.cpp
    │   ├── RedefinedAbstractionA.cpp
    │   ├── RedefinedAbstractionA.h
    │   ├── RedefinedAbstractionB.cpp
    │   └── RedefinedAbstractionB.h
    ├── Composite
    │   ├── Composite.cpp
    │   ├── Composite.h
    │   ├── Composite.pro
    │   ├── IComponent.h
    │   ├── Leaf.cpp
    │   ├── Leaf.h
    │   └── main.cpp
    ├── Decorator
    │   ├── ConcreteComponent.cpp
    │   ├── ConcreteComponent.h
    │   ├── ConcreteDecoratorA.cpp
    │   ├── ConcreteDecoratorA.h
    │   ├── ConcreteDecoratorB.cpp
    │   ├── ConcreteDecoratorB.h
    │   ├── DecoratorBase.cpp
    │   ├── DecoratorBase.h
    │   ├── Decorator.pro
    │   ├── IComponent.h
    │   └── main.cpp
    ├── Facade
    │   ├── ConcreteComponentA.cpp
    │   ├── ConcreteComponentA.h
    │   ├── ConcreteComponentB.cpp
    │   ├── ConcreteComponentB.h
    │   ├── ConcreteComponentC.cpp
    │   ├── ConcreteComponentC.h
    │   ├── ConcreteFacade.cpp
    │   ├── ConcreteFacade.h
    │   ├── Facade.pro
    │   ├── IComponentA.h
    │   ├── IComponentB.h
    │   ├── IComponentC.h
    │   ├── IFacade.h
    │   └── main.cpp
    ├── Flyweight
    │   ├── ConcreteFlyweightFactory.cpp
    │   ├── ConcreteFlyweightFactory.h
    │   ├── Flyweight.pro
    │   ├── IFlyweightFactory.h
    │   ├── IFlyweight.h
    │   ├── main.cpp
    │   ├── SharedFlyweight.cpp
    │   ├── SharedFlyweight.h
    │   ├── UnsharedFlyweight.cpp
    │   └── UnsharedFlyweight.h
    └── Proxy
        ├── ConcreteComponent.cpp
        ├── ConcreteComponent.h
        ├── IComponent.h
        ├── main.cpp
        ├── ProxyComponent.cpp
        ├── ProxyComponent.h
        └── Proxy.pro

26 directories, 232 files

$ cd Creational/Abstract\ Factory

$ cp -rf . ../..

$ cd ..

$ cd ..

$ ls
AbstractFactory.pro   ConcreteFactoryY.cpp   ConcreteProductAY.cpp  ConcreteProductBY.cpp  IProductA.h  Structural
Behavioral            ConcreteFactoryY.h     ConcreteProductAY.h    ConcreteProductBY.h    IProductB.h
ConcreteFactoryX.cpp  ConcreteProductAX.cpp  ConcreteProductBX.cpp  Creational             main.cpp
ConcreteFactoryX.h    ConcreteProductAX.h    ConcreteProductBX.h    IFactory.h             README.md

$ rm -rf README.md Structural Behavioral Creational 

$ tree
.
├── AbstractFactory.pro
├── ConcreteFactoryX.cpp
├── ConcreteFactoryX.h
├── ConcreteFactoryY.cpp
├── ConcreteFactoryY.h
├── ConcreteProductAX.cpp
├── ConcreteProductAX.h
├── ConcreteProductAY.cpp
├── ConcreteProductAY.h
├── ConcreteProductBX.cpp
├── ConcreteProductBX.h
├── ConcreteProductBY.cpp
├── ConcreteProductBY.h
├── IFactory.h
├── IProductA.h
├── IProductB.h
└── main.cpp

1 directory, 17 files

$ g++ ConcreteFactoryX.cpp ConcreteFactoryY.cpp ConcreteProductAX.cpp ConcreteProductBX.cpp ConcreteProductAY.cpp ConcreteProductBY.cpp main.cpp -o  #Проерка того, что код собирается локально
$ rm -rf main

$ mkdir include
$ mkdir src

$ mv ConcreteFactoryX.h ConcreteFactoryY.h ConcreteProductAX.h ConcreteProductAY.h ConcreteProductBX.h ConcreteProductBY.h IFactory.h IProductB.h IProductA.h include 

$ mv ConcreteFactoryX.cpp ConcreteProductAX.cpp ConcreteFactoryY.cpp ConcreteProductAY.cpp ConcreteProductBX.cpp ConcreteProductBY.cpp src/

$ git submodule add https://github.com/google/googletest third-party/gtest
Cloning into '/home/wfs/WaitForSummer/workspace/projects/RK2/third-party/gtest'...
remote: Enumerating objects: 28121, done.
remote: Counting objects: 100% (322/322), done.
remote: Compressing objects: 100% (213/213), done.
remote: Total 28121 (delta 210), reused 115 (delta 109), pack-reused 27799 (from 5)
Receiving objects: 100% (28121/28121), 13.62 MiB | 2.54 MiB/s, done.
Resolving deltas: 100% (20813/20813), done.

$ cd src  
$ edit CMakeLists.txt

$ git branch test_build
$ git branch                       
* main
  test_build
$ git checkout test_build 

$ mkdir -p build 
$ cd build 
$ cmake ..                           
-- The C compiler identification is GNU 14.2.0
-- The CXX compiler identification is GNU 14.2.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/wfs/WaitForSummer/workspace/projects/RK2/build
$  make          
[ 11%] Building CXX object src/CMakeFiles/abstract_factory_lib.dir/ConcreteFactoryX.cpp.o
[ 22%] Building CXX object src/CMakeFiles/abstract_factory_lib.dir/ConcreteFactoryY.cpp.o
[ 33%] Building CXX object src/CMakeFiles/abstract_factory_lib.dir/ConcreteProductAX.cpp.o
[ 44%] Building CXX object src/CMakeFiles/abstract_factory_lib.dir/ConcreteProductAY.cpp.o
[ 55%] Building CXX object src/CMakeFiles/abstract_factory_lib.dir/ConcreteProductBX.cpp.o
[ 66%] Building CXX object src/CMakeFiles/abstract_factory_lib.dir/ConcreteProductBY.cpp.o
[ 77%] Linking CXX static library libabstract_factory_lib.a
[ 77%] Built target abstract_factory_lib
[ 88%] Building CXX object CMakeFiles/main.dir/main.cpp.o
[100%] Linking CXX executable main
[100%] Built target main
$ ls
CMakeCache.txt  CMakeFiles  cmake_install.cmake  main  Makefile  src
$ ./main
Initializing ConcreteProductAY
Performing task for ConcreteProductAY
Initializing ConcreteProductBY
Performing task for ConcreteProductBY
$ cd ..
$ rm -rf build

$ git checkout main
$ git branch -d test_build 
Deleted branch test_build (was 64ddc23).

$ mkdir tests  
$ edit tests/CMakeLists.txt
$ edit test_factory.cpp
$ edit test_product.cpp
$ mv test_factory.cpp test_product.cpp tests

$ rm -rf AbstractFactory.pro

$ mkdir .github
$ mkdir .github/workflows
$ edit .github/workflows/build.yml

```
