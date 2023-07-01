// import './App.css';
import React,{Suspense,lazy} from 'react';
// import { Routes, Route, Link } from 'react-router-dom';
import NoPage from './Layout/NoPage';
import About from './Layout/About';
// const Home = lazy(()=>import('./Layout/Home'))
// const Product = lazy(()=>import('./Layout/Product'))
// import {
//   BrowserRouter as Routes,
//   Router,
//   Route,
//   Link,
// } from "react-router-dom";
// import Home from './Layout/Home';
// import About from './Layout/About';
const Home = React.lazy(()=>import('./Layout/Home'));
const Product = React.lazy(()=>import('./Layout/Product'))
import {
  BrowserRouter as Router,
  Routes,
  Route,
  Link,
} from "react-router-dom";


function App() {
  return (
    <>
    {/* <Suspense fallback={<h1>Loading......</h1>}>
      <Home/>
    </Suspense>
     
    <Suspense fallback={<h1>Loading......</h1>}>
      <About/>
    </Suspense>

   <Router>
    <Routes>
      <Route path='' />
    </Routes>
   </Router> */}

<div className="container mt-5">
      <h2 className="mb-3">React Lazy Loading Routes Example</h2>
      <nav>
        <Link to="/">Home</Link>
        <Link to="/product">Product</Link>
      </nav>
      <Router>
      <Routes>
        <Route
          index
          element={
            <React.Suspense fallback={<>...</>}>
              <Home />
            </React.Suspense>
          }
        />
        <Route
          path="product"
          element={
            <React.Suspense fallback={<>...</>}>
              <Product />
            </React.Suspense>
          }
        />
        <Route path="*" element={<NoPage />} />
      </Routes>
      </Router>
    </div>
   </>
  );
}

export default App;