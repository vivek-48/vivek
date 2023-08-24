import React from 'react';
import ReactDOM from 'react-dom/client';
import RootRouter from './router'
import {RouterProvider} from 'react-router-dom';
import './index.css';
import 'mdb-react-ui-kit/dist/css/mdb.min.css';
import '@fortawesome/fontawesome-free/css/all.min.css'
import { Provider } from 'react-redux';
import store from './Store/CustomeStore.jsx'

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <Provider store={store}>
    <RouterProvider router={RootRouter}></RouterProvider>
  </Provider>
 );


