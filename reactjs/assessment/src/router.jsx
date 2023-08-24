import React, { Suspense } from "react";
import { createBrowserRouter } from "react-router-dom";
import HomePage from "./HomePage.jsx";
import AboutPage from "./AboutPage.jsx";
import ContactPage from "./ContactPage.jsx";
import LoginCompo from "./LoginComponent.jsx";
import HeaderComponent from './HeaderComponent.jsx';

const MainRouter = createBrowserRouter([
    {
        path: "/",
        element: <><HeaderComponent /><HomePage /></>,
    },
    {
        path: "/about",
        element: <><HeaderComponent /><AboutPage></AboutPage></>,
    },
    {
        path: "/contact",
        element: <><HeaderComponent /><ContactPage /></>,
    }, {
        path: "/login",
        element: <><LoginCompo /></>,
    }
]);


export default MainRouter;